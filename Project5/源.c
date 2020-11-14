#include<stdio.h>
int my_strlen(char* len)
{
	if (*len != '\0')
	{
		return 1 + my_strlen(len + 1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	char arr[] = "bit";
	printf("³¤¶ÈÎª%d ", my_strlen(arr));
	return 0;
}