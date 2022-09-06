#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Add(int x, int y)
{
	int z = 0;
		z = x*y;
	return z;
}
int main(void)
{
	int num1 = 0;
	int num2 = 0;
	
	scanf("%d%d", &num1,&num2);//忘记打&&&&&&&&&输出了
	int sum = Add(num1, num2);
	printf("%d", sum);//没有打印怎么可能得出结果啊啊啊啊啊啊啊啊啊啊啊
	



	
	return 0;
}