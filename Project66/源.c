#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, i, j, p;
	scanf("%d", &n);
	char arr[7][7];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	if (n == 1)
	{
		printf("%d %d",0,0);
		return 0;
	}
	int num, k, d = 0;
	int w = 1;
	for (i = 0; i < n; i++)
	{
		d = 0;
		num = arr[i][0];
		for (j = 1; j < n; j++)
		{
			if (arr[i][j] > num)
			{
				k = j;
				num = arr[i][k];
				w = 1;
			}
		}
		for (p = 0; p < n; p++)
		{
			if (arr[p][k] < num)
			{
				w = 0;
				break;
			}
		}
		if (w == 1)
		{
			printf("%d %d", i, k);
			break;
		}
	}
	if (w == 0)
	{
		printf("NONE");
	}
	return 0;
}
//法2：
//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
//int main()
//{
//    int n, i, j, a[7][7], x, y, z, count, k, max, flag1, flag2;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    count = 0;
//    for (i = 0; i < n; i++)
//    {
//        max = -99999;
//        flag1 = 1;
//        for (j = 0; j < n; j++)//找出一行中的最大值
//        {
//            if (a[i][j] > max)
//            {
//                max = a[i][j];
//                z = j;
//            }
//        }
//        for (k = 0; k < n; k++)//判断它是否是这一列的最小值
//        {
//            if (a[k][z] < max)
//            {
//                flag1 = 0;
//                break;
//            }
//        }
//        if (flag1 == 1)
//        {
//            x = i;
//            y = z;
//            count++;
//            break;
//        }
//        else if (flag1 == 0 && z < n)//如果最大值不是这一行的最后一的元素，则再向后判断，可能有与最大值相等的元素
//        {
//            for (j = z + 1; j < n; j++)
//            {
//                if (a[i][j] == max)
//                {
//                    flag2 = 1;
//                    for (k = 0; k < n; k++)
//                    {
//                        if (a[k][j] < max)
//                        {
//                            flag2 = 0;
//                            break;
//                        }
//                    }
//                    if (flag2 == 1)
//                    {
//                        x = i;
//                        y = j;
//                        count++;
//                        break;
//                    }
//                }
//            }
//        }
//    }
//    if (count == 0)printf("NONE\n");
//    else printf("%d %d\n", x, y);
//    return 0;
//}