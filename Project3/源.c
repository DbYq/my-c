#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//my_strlen(char* arr)//����char�����ַ���arr����Ԫ�ص�ַ
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;//ָ�����Ųһλ
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//�����ַ���arr��Ԫ�ص�ַ
//	printf("len=%d", len);
//	return 0;
//}
//��ŵ������
//#include<stdio.h>
//void move(char x, char y)
//{
//	printf("%c->%c\n", x, y);
//}
//void hanoi(int n, char x, char y, char z)
//{
//	if (n == 1)
//	{
//		move(x, z);//���ֻ��һ���̣�ֱ�Ӵ�A��C����������������������������abc��xyz���Ӧ
//	}
//	else
//	{
//		hanoi(n - 1, x, z, y);//�Ȱ�������ϵ��̴�x����z�ƶ���y
//		move(x, z);//�ٰ�ʣ�µ����ƶ���z
//		hanoi(n - 1, y, x, z);//�ٽ�y�ϵ��̾���x�ƶ���z
//	}
//}
//int main()
//{
//	int n;
//	printf("������Ҫ�ƶ���Բ��������\n");
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
