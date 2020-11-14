#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int binary_search(int arr[],int i,int sz)
{
	
	int left = 0;
	int right = sz - 1;
	while (right >= left)
	{
		int m = (left + right) / 2;
		
		if (i < arr[m])
		{
			right = m-1;
		}
		else if(i>arr[m])
		{
			left = m+1;
		}
		else
		{
			return m;
		}
	}
		return 0;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k =0;
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,sz);
	if(0 == ret)
	{
		printf("找不到");
	}
	else
	{
		printf("下标是%d \n", ret);
	}
	return 0;
}