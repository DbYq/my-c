#include<stdio.h>
int main()
{
    int fahr = 100;
    int celsius = 0;
    int z = 5 * (fahr - 32) / 9;
    printf("fahr = %d, celsius = %d", fahr, z);
    return 0;
}