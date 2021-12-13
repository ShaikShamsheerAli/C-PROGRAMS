#include<stdio.h>
int main()
{
	float a,b,c,p;
	printf("No. of Units:");
	scanf("%f",&a);
	if(a<=50)
	{
	b=a*0.50;
	c=(20*b)/100;
	p=b+c;
	printf("%.2f",p);
	}
	else if(a<=150)
	{
	b=a*0.75;
	c=(20*b)/100;
	p=b+c;
	printf("%.2f",p);
	}
	else if(a<250)
	{
	b=a*1.20;
	p=b+c;
	c=(20*b)/100;
	printf("%.2f",p);
	}
	else if(a>250)
	{
	b=a*1.50;
	c=(20*b)/100;
	p=b+c;
	printf("%.2f",p);
	}
}
