#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char arr1[81], arr2[80], arr3[80];
	int i, j=0, k=0,z,count=0;
	gets(arr1);
	for (i = 0; i < 81; i++)
	{
		if (arr1[i] == '\0')
		{
			break;
		}
		if (arr1[i] >= 'A' && arr1[i] <= 'Z')
		{
			arr2[j] = arr1[i];
			j++;
		}
	}
	if (j == 0)
	{
		printf("Not Found");
	}
	for (i = 0; i < j; i++)
	{
		for (z = i+1; z < j; z++)
		{
			if (arr2[i] == arr2[z])
			{
				count++;
			}
		}
	}
	if (count == 0)
	{
		puts(arr2);
	}
	else
	{
		for (i = 0; i < j; i++)
		{
			for (z = i + 1; z < j; z++)
			{
				if (arr2[z] = arr2[i])
				{
					for (k = z; k <= j; k++)
					{
						arr2[k] == arr2[k + 1];
					}
					j--;
					z--;
				}
			}
		}
		puts(arr2);
	}
	return 0;
}