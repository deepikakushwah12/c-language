#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	printf("enter c :");
	scanf("%d",&c);
	
	if (a<b)
	{
		if(a<c)
		{
			printf("a is mini:");
		}
		else
		{
			printf("c is mini :");
		}
	}
	else
	{
		if(b<c)
		{
			printf("b is mini:");
		}
		else
		{
			printf("c is mini:");
		}
	}
	
}