#include<stdio.h>
int main()
{
	int c;
	printf("Enter C:");
	scanf("%d",&c);
	if(c<0)
	printf("\nFreezing weather");
	else if(c<10)
	printf("\nVery Cold weather");
	else if(c<20)
	printf("\nCold weather");
	else if(c<30)
	printf("\nNormal Temp");
	else if(c<40)
	printf("\nHot");
	else if(c>=40)
	printf("\nVery Hot");
}
