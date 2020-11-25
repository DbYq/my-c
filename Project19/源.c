#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int m, n,k,i;
	scanf("%d %d", &m, &n);
	scanf("%d", &k);
	do
	{
		
	
			if (k > m)
			{
				printf("Too big");
				continue;
			}
			else if (k < m)
			{
				printf("Too small");
				continue;
			}
			else
				printf("Bingo!");
			break;
		
	}while (n);
	return 0;
}