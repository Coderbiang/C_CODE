#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<math.h>
int main()
{
	int hour1, minute1;
	int hour2, minute2;
	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);
	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;

	int t = t1 - t2;
	t = abs(t);
	printf("二者相差%d时%d分",t / 60,t % 60);
	return 0;
}