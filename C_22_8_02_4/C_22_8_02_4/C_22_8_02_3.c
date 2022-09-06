#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
int arr[10] = { 2,3,5,7,9,11,13,17,19,23 };
int i = 0;
while (i < 10)//这玩意是下标，不是元素
{
	printf("%d\n", arr[i]);
	i++;//忘了这玩意，就会一直打印2222222222222222222222222222222222222
}
    return 0;
}
