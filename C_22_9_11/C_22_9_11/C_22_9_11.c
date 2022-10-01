#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

float average(float x,float y,float z)
{
	float A = 0;
	A = (x + y + z) / 3.0;
	return A;
}
int main(void)
{
	float a=0, b=0, c=0;
	scanf("%f %f %f", &a,&b,&c);
	float data=average(a, b, c);
	printf("%f", data);

	return 0;
}