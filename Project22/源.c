#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int prime(int num)
//{
//
//}
//int main()
//{
//	int n,num;
//	scanf("%d", &n);
//	/*int i;
//	for (i = pow(10, n - 1); i < pow(10, n); i++)
//	{
//		int bw, sw, w, q, b, s, g;
//		bw = i / 1000000 % 10;
//		sw = i / 100000 % 10;
//		w = i / 10000 % 10;
//		q = i / 1000 % 10;
//		b = i / 100 % 10;
//		s = i / 10 % 10;
//		g = i / 1 % 10;
//		if (i == pow(bw, n) + pow(sw, n) + pow(w, n) + pow(q, n) + pow(b, n) + pow(s, n) + pow(g, n))
//			printf("%d\n", i);
//	}*/
//	int k = prime(num);
//	printf("%d\n", k);
//	return 0;
//}
#include <stdio.h>
int main()
{
    int n;
    printf("请输入一个数：\n");
    scanf_s("%d", &n);
    int first = 1;
    int i = 1;
    while (i < n) {
        first *= 10;
        i++;
    }
    // printf("first=%d\n", first);
    // 遍历100-999
    i = first;
    while (i < first * 10) {
        int t = i;
        int sum = 0;
        do {
            int d = t % 10;
            t /= 10;
            int p = 1;
            int j = 0;
            while (j < n)
            {
                p *= d;
                j++;
            }
            sum += p;
        } while (t > 0);
        if (sum == i)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}