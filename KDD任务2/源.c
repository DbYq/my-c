#define _CRT_SECURE_NO_WARNINGS
//第一题：
//#include <stdio.h>
//int main()
//{
//    int a[5][6], i, j, n, m,num1,num2;
//    printf("输入5*6的矩阵：\n");
//    for (i = 0; i < 5; i++)
//        for (j = 0; j < 6; j++)
//            scanf("%d", &a[i][j]);
//    for (i = 0; i < 5; i++)
//        for (j = 0; j < 6; j++)
//        {
//            for (m = 0; m < 6; m++)
//            {
//                if (a[i][j] >= a[i][m])
//                    continue;
//                else
//                    break;
//            }
//            if (m == 6)
//            {
//                for (n = 0; n < 5; n++)
//                {
//                    if (a[i][j] >= a[n][j])
//                        continue;
//                    else
//                        break;
//                }
//                if (n == 5)
//                {
//                    if (a[i - 1][j - 1] != a[i][j] && a[i - 1][j + 1] != a[i][j] && a[i + 1][j - 1] != a[i][j] && a[i + 1][j + 1] != a[i][j])
//                    {
//                        printf("奇异数有：%d ", a[i][j]);
//                    }
//                }
//            }
//        }
//}
