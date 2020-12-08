#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int arr1[4], arr2[4];
//	int i, j=3,n;
//	scanf("%d", &n);
//	for (i = 0; i < 4; i++)
//	{
//		int z = n / pow(10, i);
//		arr1[j] = (z % 10 + 9)%10;
//		j--;
//	}
//	int m, k;
//	m = arr1[0];
//	arr1[0] = arr1[2];
//	arr1[2] = m;
//	k = arr1[1];
//	arr1[1] = arr1[3];
//	arr1[3] = k;
//	printf("The encrypted number is ");
//	for (j = 0; j < 4; j++)
//	{
//		printf("%d", arr1[j]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n, i, max, min, j, k, z,t,q;
//    int arr[10];
//    scanf("%d", &n);
//    if (n == 1)
//    {
//        scanf("%d", &arr[0]);
//        printf("%d ", arr[0]);
//    }
//    else
//    {
//        for (i = 0; i < n; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        max = arr[0];
//        min = arr[1];
//
//        for (i = 0; i < n; i++)
//        {
//            if (arr[i] <= min)
//            {
//                min = arr[i];
//                k = i;
//            }
//        }
//        int a, b;
//        a = arr[0];
//        arr[0] = min;
//        arr[k] = a;
//        for (i = 0; i < n; i++)
//        {
//
//            if (arr[i] >= max)
//            {
//                max = arr[i];
//                z = i;
//            }
//        }
//        b = arr[n - 1];
//        arr[n - 1] = max;
//        arr[z] = b;
//        for (i = 0; i < n; i++)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}
#include<stdio.h>
int main()
{
	int year, month, day,sum=0;
	scanf("%d/%d/%d", &year, &month, &day);
	switch (month)
	{
	case 1:
		sum = sum + day;
		break;
	case 2:
		sum = 31 + day;
		break;
	case 3:
		sum = 31 + 28 + day;
		break;
	case 4:
		sum = 31 + 28 + 31 + day;
		break;
	case 5:
		sum = 31 + 28 + 31 + 30 + day;
		break;
	case 6:
		sum = 31 + 28 + 31 + 30 + 31 + day;
		break;
	case 7:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + day;
		break;
	case 8:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
		break;
	case 9:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
		break;
	case 10:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
		break;
	case 11:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
		break;
	case 12:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
		break;
	default:
		break;
	}
	if (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))&&month>1)
	{
		sum = sum + 1;
	}
	printf("%d", sum);
	return 0;
}