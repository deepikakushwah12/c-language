#include <stdio.h>

void main()
{
   int n;
   
   printf("Enter a array size :");
   scanf("%d",&n);
   
   int a[n];
   int i;
   
   for(i=0; i<n; i++)
   {
       printf("Enter a[%d] :",i);
       scanf("%d",&a[i]);
   }
   
   for(i=0; i<n; i++)
   {
       if(a[n]<0)
       {
           printf("%d",a[n]);
       }
   }
   
}
