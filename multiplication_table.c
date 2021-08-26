#include<stdio.h>

void main()

{
   
int a,i,j,p;
    
printf("\t_____Multiplication Table_____\n");
   
printf("enter the limit \n");
   
scanf("%d",&a);
   
for(i=1;i<=a;i++)
 
  {
     
   	for(j=1;j<=10;j++)
     
   	{
           
		 p=i*j;
           
 		printf("%d x %d = %d \n",i,j,p);
      
   	 }
   
  }

}
