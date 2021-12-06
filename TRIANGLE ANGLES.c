#include<stdio.h>
int main()
{
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if(a+b+c==180)
	{
		printf("abc is a triangle");
	}
	else
	{
		printf("abc is not a triangle");
	}
}
