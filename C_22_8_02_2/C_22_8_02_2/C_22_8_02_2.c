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
	
	scanf("%d%d", &num1,&num2);//���Ǵ�&&&&&&&&&�����
	int sum = Add(num1, num2);
	printf("%d", sum);//û�д�ӡ��ô���ܵó��������������������������
	



	
	return 0;
}