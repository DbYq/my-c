//冒泡排序法
#include<stdio.h>
void Bubble_function(int arr[], int sz)
{
	int k = 0;
	for (k = 0; k < sz - 1; k++)
	{
		int j = 0;
		int m = 1;
		for (j = 0; j < sz - 1 - k; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				m = 0;
			}
		}
		if (1 == m)
			{
				break;
			}
	}
}
int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_function(arr,sz);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
//数组名在一般情况下表示数组首字母的地址。但是在两种例外情况
//1、sizeof(数组名）此时数组名表示整个数组大小，单位是字节
//2、&数组名，数组名代表整个数组地址