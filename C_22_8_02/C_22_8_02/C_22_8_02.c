#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int code = 0;
	printf("���ںú�ѧϰC������(0/1):");
	scanf("%d", &code);
	if (code == 1)
		printf("��ѧ������\n");
	else
		printf("ʹ����ߴ�һ�꣬��û�н�ѧ��!\n");
	return 0;
}