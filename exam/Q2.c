#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);
	
    //a,b,c
    if(a>b)
    {
    	//a,c
    	if(a>c)
    	{
    		//a
    		printf("a is max");
    		
		}
		else
		{
			//c
			printf("c is max");
		}
	}
	else
	{
		//b,c
		if(b>c)
		{
			//b
			printf("b is max");
		}
		else
		{
			//c
			printf("c is max");
		}
	}
}
