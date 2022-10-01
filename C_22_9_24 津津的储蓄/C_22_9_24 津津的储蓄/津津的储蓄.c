#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MONEY 300

int main()
{
	int arr[12];
	for (int i = 0; i < 12; i++)
		scanf("%d", &arr[i]);
	int left = 0;
	int left1 = 0;
	int sum = MONEY+left1;
	int mom = 0;
	int t = 0;
	for (int i = 0; i < 12; i++)
	{
		left = sum - arr[i];
		if (left >= 0)

			if (left / 100 >= 1)
			{
				left1 = left % 100;
				mom = mom + left / 100 * 100; 
				sum = MONEY + left1;
			}
			else
			{
				left1 = left;
				sum = MONEY + left1;
			}
		else
		{
			t = -(i + 1);
			break;
		}
		
		
	}
	if (t == 0)
	{
		int savings = mom * 1.2 + left1;
		printf("%d", savings);
	}
	else
		printf("%d", t);
	return 0;
}