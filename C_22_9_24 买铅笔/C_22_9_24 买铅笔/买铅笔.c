#define _CRT_SECURE_NO_WARNINGS 1]
#include <stdio.h>

int main()
{
	int num=0;
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	printf("P老师买铅笔\n请输入所需铅笔数量：");
	scanf("%d", &num);
	printf("输入每盒铅笔数量和每盒单价：\n");
	scanf("%d %d", &a, &d);
	scanf("%d %d", &b, &e);
	scanf("%d %d", &c, &f);
	int sum3 = f;
	int sum2 = e;
	int sum1 = d;
	if (num % a == 0)
		sum1 = num / a * d;
	else
		sum1 = ((num / a) + 1) * d;
	if (num % b == 0)
		sum2 = num / b * e;
	else
		sum2 = ((num / b) + 1) * e;
	if (num % c == 0)
		sum3 = num / c * f;
	else
		sum3 = ((num / c) + 1) * f;
	//printf("%d %d %d", sum1, sum2, sum3);
	if (sum1 < sum2&&sum1 < sum3)
		printf("%d", sum1);
	else if (sum2 < sum1&&sum2 < sum3)
		printf("%d", sum2);
	else 
		printf("%d", sum3);

	return 0;
}