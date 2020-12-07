#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    char arr[80];
//    char arr2[80];
//    int i, k = 0, j, c = -1, q = 0;
//    gets(arr);
//    for (i = 0; i < 80; i++)
//    {
//        if (arr[i] >= 'A' && arr[i] <= 'Z')
//        {
//            arr2[k] = arr[i];
//            k++;
//        }
//        if (arr[i] == '\0')
//            break;
//    }
//    if (k == 0)
//    {
//        printf("Not Found");
//    }
//    for (i = 0; i < k; i++)
//    {
//        if (i == c)
//        {
//            continue;
//        }
//        for (j = i + 1; j < k; j++)
//        {
//
//            if (arr2[i] == arr2[j])
//            {
//                q = 1;
//                c = j;
//            }
//            if (arr2[i] != arr2[j])
//            {
//                q = 1;
//            }
//        }
//        if (i == c)
//        {
//            continue;
//        }
//        if (q == 1)
//        {
//            printf("%c", arr2[i]);
//        }
//    }
//    return 0;
//}

#include<stdio.h>
int ADD(int a, int b)
{
	return a + b;
}
int main()
{
	/*int i = 0;
	for (i = 0; i < 100; i++)
	{
		printf("%d ", i);
	}
	for (i = 0; i < 100; i++)
	{
		printf("%d ", 10 - i);
	}*/
	printf("hehe\n");
	int a = 10;
	int b = 10;
	int c = ADD(a, b);
	return 0;
}