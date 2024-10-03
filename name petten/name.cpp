#include<stdio.h>
#include<conio.h>

 main()
{

   int i,j;
    for(i=1;i<=5;i++) 
    {
    	for(j=1;j<=5;j++)
    	{
    	    if((i==1 && j!=5) || j==1 ||(i==5 && j!=5))
    	    {
    	    	printf("* ");
	     	}
	     	else if(i==2 && j==5)
	     	{
	     		printf("* ");
			}
			else if(i==3 && j==5)
			{
				printf("* ");
			}
			else if(i==4 && j==5)
			{
				printf("* ");
			}
	     	else
	     	{
	     		printf("  ");
			}
		
		}
		printf("\n");
	}
	
		printf("\n");
		
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(j==1 || i==1 ||i==3 ||i==5)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		
		}
			printf("\n");
	}
	
		printf("\n");
		
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(j==1 || i==1 ||i==3 ||i==5)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		
		}
			printf("\n");
	}
		printf("\n");
		
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(j==1 || i==1 || i==3)
			{
				printf("* ");
			}
			else if(i==2 && j==5)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		
		}
			printf("\n");	
	}
	 
	 printf("\n");
	 
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(j==3 || i==1 || i==5)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		
		}
		
			printf("\n");	
	}
	
	printf("\n");
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(j==1)
			{
				printf("* ");
			}
			else if(i==3 && j==2)
			{
				printf("* ");
			}
				else if(i==2 && j==3)
			{
				printf("* ");
			}
				else if(i==1 && j==4)
			{
				printf("* ");
			}
				else if(i==4 && j==3)
			{
				printf("* ");
			}
				else if(i==5 && j==4)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		
		}
			printf("\n");
	}
	
		printf("\n");
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(j==1 || j==5 || i==1 || i==3)
			{
				printf("* ");
			}
			
			else
			{
				printf("  ");
			}
		
		}
			printf("\n");
	}
	
}
