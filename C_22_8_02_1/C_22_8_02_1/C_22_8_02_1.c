#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int line = 0;
	while (line<30000)//这也是！！！不能加；
	{
		printf("写代码:%d\n", line);
		line++;
	}
	if (line == 30000)//语句后不能加；！！！！！
	{
		printf("好offer\n");
	}
	return 0;
}