//数组
#include<stdio.h>
#include<string.h>//strlen的头文件
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d ", strlen(arr));//strlen是计算数组长度：'\0'之前的字符个数；所以输出为6
//	printf("%d ", sizeof(arr));//sizeof是计算所占空间大小所以输出为7
//	return 0;
//}

//二维数组
	//二维数组的创建：int arr1[3][4];//指三行四列的意思
	//char arr2[3][4];
	//double arr3[3][4];
	//二维数组的初始化：
	//int arr[3][4] = { 1,2,3,4,5 };此时第一行到4已经满，所以5被放在第二行
	//int arr[3][4] = { {1,2},{3,4} };此时第一行放入1，2；第二行放入3，4.
	//int arr[][4]={1,2,3,4};注意二维数组行可以省略而列不可省略
int main()
{
	int arr[3][4] = { {1,2,3,4},{4,6,2} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}