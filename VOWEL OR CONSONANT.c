#include<stdio.h>
int main()
{
	char x;
	printf("x:");
	scanf("%c",&x);
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
	{
		printf("x is vowel");
	}
	else
	{
		printf("x is constant");
	}
}
