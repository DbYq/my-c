#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[81], arr2[81], arr3[81], arr4[81], arr5[81];
//	scanf("%s%s%s%s%s", &arr1, &arr2, &arr3, &arr4, &arr5);
//	//printf("%s%s%s%s%s", arr1, arr2, arr3, arr4, arr5);
//	int i, j;
//	char arr[5][81];
//	char temp[81];
//	strcpy(arr[0], arr1);
//	strcpy(arr[1], arr2);
//	strcpy(arr[2], arr3);
//	strcpy(arr[3], arr4);
//	strcpy(arr[4], arr5);
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4 - i; j++)
//		{
//			if (strcmp(arr[j],arr[j+1])>0)
//			{
//				strcpy(temp, arr[j]);
//				strcpy(arr[j], arr[j + 1]);
//				strcpy(arr[j + 1], temp);
//			}
//		}
//	}
//	printf("After sorted:\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[4][20];
//	int i, k=0;
//	char arr2[10];
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%s", arr[i]);
//	}
//	for (i = 0; i < 4; i++)
//	{
//		arr[i][0] = arr2[k];
//		k++;
//	}
//	char* p = arr2;
//	for (k = 0; k < 4; k++)
//	{
//		printf("%c", *(p+k));
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n, i, j;
//	int temp;
//	scanf("%d", &n);
//	int arr[11];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	printf("%d", arr[0]);
//	for (i = 1; i < n; i++)
//	{
//		printf(" %d", arr[i]);
//	}
//	return 0;
//}
#include <stdio.h>
#include <math.h>

double funcos(double e, double x);

int main()
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}
double funcos(double e, double x)
{
    int i, k = -1;
    double sum = 1;
    int t = 1, z;
    for (i = 1; i < 1000; i++)
    {
        for (z = 1; z <= 2 * i; z++)
        {
            t = t * z;
        }
        if ((pow(x, 1.0*2*i) / t)<e)
        {
            break;
        }
        sum = sum + k * (pow(x, 1.0*2 * i) / t);
        k = -k;
    }
    return sum;
}