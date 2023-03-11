#include<stdio.h>
int main()
{
	int m;
	printf("enter the number:");
	scanf("%d",&m);
	if(m%3==0 && m%5==0)
	{
		printf("good number");
	}
	else if(m%3==0)
	{
		printf("bad number");
	}
	else if(m%5==0)
	{
		printf("poor number");
	}
	else
	{
		printf("-1");
	}
}
