//今天的练习（有几题不会做就算了hhh）

#include <stdio.h>

int main(void) 
{
	printf("bihang chen\n");
	printf("bihang\nchen\n");
	printf("bihang ");
	printf("chen\n");
	printf("广东省潮州市\n\n");
	//把年龄换算成天数
	int years, days;
	years = 19;
	days = 365 * years;
	printf("Congratulation!\nToday you are %d days old!\n\n", days);
	printf("%d years=%d days\n\n", years, days);

	//计算toes
	int toes, toeses, toes2;
		toes = 10;
		printf("toeses=%d\n", toes+toes);
		printf("toes2=%d\n\n", toes*toes);
		//另一种表达方式(在括号内/外运算都行） 
		//括号内则不需声明后两个变量
		toeses = toes + toes;
		toes2 = toes * toes;
		printf("toeses=%d\ntoes2=%d\n", toeses,toes2);



	
	

	return 0;
}