#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[10];
	int t = 0;
	int tt = 0;
	for (int i=0; i < 10; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &tt);

	int i = 0;
	while (i < 10)
	{
		if (arr[i] <= tt+30)
			t++;
		i++;
	}
	printf("%d", t);
	return 0;
}