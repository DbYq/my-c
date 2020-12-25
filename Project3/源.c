#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//my_strlen(char* arr)//接受char类型字符串arr的首元素地址
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;//指针向后挪一位
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//传出字符串arr首元素地址
//	printf("len=%d", len);
//	return 0;
//}
//汉诺塔问题
//#include<stdio.h>
//void move(char x, char y)
//{
//	printf("%c->%c\n", x, y);
//}
//void hanoi(int n, char x, char y, char z)
//{
//	if (n == 1)
//	{
//		move(x, z);//如果只有一个盘，直接从A到C。。。。。。。。。。。。。。abc和xyz相对应
//	}
//	else
//	{
//		hanoi(n - 1, x, z, y);//先把最大盘上的盘从x经过z移动到y
//		move(x, z);//再把剩下的盘移动到z
//		hanoi(n - 1, y, x, z);//再将y上的盘经过x移动到z
//	}
//}
//int main()
//{
//	int n;
//	printf("请输入要移动的圆盘数量：\n");
//	scanf("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//}
//#include <stdio.h>
//
//double fact(int n);
//double factsum(int n);
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//    printf("fact(%d) = %.0f\n", n, fact(n));
//    printf("sum = %.0f\n", factsum(n));
//
//    return 0;
//}
//double fact(int n)
//{
//    if (n <= 1)
//    {
//        return 1;
//    }
//        return n * fact(n - 1);
//}
//double factsum(int n)
//{
//    if (n <= 1)
//    {
//        return 1;
//    }
//    else
//        return fact(n) + factsum(n - 1);
//}
//#include <stdio.h>
//
//double calc_pow(double x, int n);
//
//int main()
//{
//    double x;
//    int n;
//
//    scanf("%lf %d", &x, &n);
//    printf("%.0f\n", calc_pow(x, n));
//
//    return 0;
//}
//double calc_pow(double x, int n)
//{
//    if (n == 1)
//        return x;
//    else
//        return x * calc_pow(x, n - 1);
//}
