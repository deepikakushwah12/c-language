#include<stdio.h>

 main ()
{
	char grade;
	int mark;
	
	printf ("enter your marks :");
	scanf ("%d",&mark);
	
	grade =(mark>=90 && mark<=100)? 'A'
	:(mark>=80 && mark<=90)? 'B'
	:(mark>=70 && mark<=80)? 'C'
	:(mark>=60 && mark<=70)? 'D'
	:(mark>=50 && mark<=60)? 'E'
	:'F';
	printf("your grade is %c",grade);
	
	switch(grade)
	{
	case 'A':printf("Excellent work");
	break;
	case 'B':printf ("well done");
	break;
	case 'C':printf ("good job");
	break;
	case 'D':printf ("you passed , but you could do better");
	break;
	case 'E':printf ("you passed , but you could do better");
	break;
	case 'F':printf ("sorry you failed");
	break; 
	}
	
	if (grade=='A' || grade=='B'|| grade=='C'|| grade=='D'|| grade=='E')
	{
		printf("congratulation!");
	}
	else
	{
		printf("please try again next time");
	}
	
	

}