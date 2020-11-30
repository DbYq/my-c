#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int num, count = 0, num2;
//    scanf("%d", &num);
//    int k = num;
//    while (num > 9)
//    {
//        num /= 10;
//        count += 1;
//    }
//    while (count >= 0)
//    {
//        num2 = k / pow(10, count);
//        num2 %= 10;
//        printf("%d ", num2);
//        count --;
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n,i,num;
//	scanf("%d", &n);
//	for (i = 2; i <= n; i++)
//	{
//		num = pow(2, i) - 1;
//		int j;
//		for (j = 2; j < num; j++)
//		{
//			if (num % j == 0)
//			{
//				break;
//			}
//		}
//		if (num==j)
//		{
//			printf("%d\n", num);
//		}
//	}
//	return 0;
//}
#include<stdio.h>
#define MAX 100
int main()
{
    char arr[MAX];
    gets(arr);
    int i,count=0;
    for (i = 0; i < MAX; i++)
    {
        if (arr[i] == ' ')
            count++;
    }
    count++;
    printf("%d", count);
    return 0;
}