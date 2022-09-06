#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int MAX(int x, int y)
{
	//int z = 0;
	if (x > y)
		//z = x;
		return x;
	
	else
		//z=y;
	return y;
}
int main(void)
{
	//int x = 20;
	//int y = 10;
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);//²»ÄÜ¼Ó\n!!!!!!!!
	int sum = MAX(a, b);
	printf("%d\n", sum);

	return 0;
}