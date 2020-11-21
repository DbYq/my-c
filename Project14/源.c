#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    if (0 == n)
//    {
//        printf("sign(%d) = 0\n", n);
//    }
//    else if (n > 0)
//    {
//        printf("sign(%d) = 1\n", n);
//    }
//    else
//    {
//        printf("sign(%d) = -1", n);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[10];
//	gets(arr);
//	printf("%s", arr);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    char arr[1] = {0};
//    gets(arr);
//    int i, l=0, b=0, d=0, o=0;
//    for (i = 0; i < 10; i++)
//    {
//        if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z'))
//            l++;
//        else if (arr[i] >= 0 && arr[i] <= 9)
//            d++;
//        else if (arr[i] == ' '||arr[i]=='\n')
//            b++;
//        else
//            o++;
//    }
//    printf("letter = %d, blank = %d, digit = %d, other = %d", l, b,d,o);
//    return 0;
//}
#include<stdio.h>
int main()
{
    char a;

    int i, l = 0, b = 0, d = 0, o = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%c", &a);
        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
            l++;
        else if (a >= '0' && a <= '9')
            d++;
        else if (a == ' ' || a == '\n')
            b++;
        else
            o++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", l, b, d, o);
    return 0;
}