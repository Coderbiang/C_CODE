#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;
	int n = 0;
		scanf("%d", n);
	if (n % 4 == 0)
		a++;
	if (n % 100 == 0)
		a++;
	if (n % 400 == 0)
		a++;
	if (a % 2 == 0)
		printf("1");
	else
		printf("0");


	return 0;
}