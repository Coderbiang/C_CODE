#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int code = 0;
	printf("现在好好学习C语言吗？(0/1):");
	scanf("%d", &code);
	if (code == 1)
		printf("开学后轻松\n");
	else
		printf("痛苦面具戴一年，还没有奖学金!\n");
	return 0;
}