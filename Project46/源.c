#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	float x1, y1, x2, y2;
	scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
	float x, y;
	x = x1 + x2;
	y = y1 + y2;
	if (x == 0)
	{
		x = pow(x,2);
	}
	if (y == 0)
	{
		y = pow(y, 2);
	}
	printf("(%.1f,%.1f)", x, y);
	return 0;
}