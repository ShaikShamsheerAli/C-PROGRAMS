#include<stdio.h>
int main()
{
	int phy,mat,vd,bio,comp;
	float per;
	printf("enter five subject marks");
	scanf("%d%d%d%d%d",&phy,&mat,&vd,&bio,&comp);
	per=(phy+mat+vd+bio+comp)/5;
	printf("percentage=%.2f\n",per);
	if(per>=90)
	{
		printf("grade A");
	}
	if(per>=80)
	{
		printf("grade B");
	}
	if(per>=70)
	{
		printf("grade C");
	}
	if(per>=40)
	{
		printf("grade D");
	}
	if(per<=40)
	{
		printf("grade E");
	}
}
