#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a==365||a<365)
	{
		printf("a is not leap year");
	}
	else
	{
		printf("a is a leap year");
	}
}
