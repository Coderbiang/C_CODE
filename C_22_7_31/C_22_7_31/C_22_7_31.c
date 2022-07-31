#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>

int main(void)
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0' };

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	printf("\a\a\a");
	printf("%c%c%c\n", '\161','\141','\161');
	printf("%s\n", "abc");


	return 0;
}