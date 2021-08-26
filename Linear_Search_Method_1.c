/* documentation section */
    //this program implements the linear search method                         
    //the array is asummed to be unordered 
    //the memmory is dynamically allocated for the array elemnts using the function calloc()

/* link section */
#include<stdio.h>

#include<stdlib.h>

/* global declaration section */
int *p,i,j,l;
void input();
void print();
void LinearSearch(int *p,int lim);

/* main function section */
int main()
{
 input();
 print(); 
 LinearSearch(p,l); 
}

/* user defined program section */
void input()
{
	printf("enter the limit for the array \n");
    
	scanf("%d",&l);
	p=(int*)calloc(l,sizeof(int));
    
	printf("enter the elements \n");
    
	for(i=0;i<l;i++)
    
	{
        
		scanf("%d",&p[i]);
    
	}
}

void print()
{
	printf("the array elements are \n");
   
	for(i=0;i<l;i++)
    
	{
        
		printf("%d ",p[i]);
    
	}
	
}

void LinearSearch(int *ptr,int lim)
{
	int n;
	printf("\n enter the element to find \n");
    
	scanf("%d",&n);
   
 	for(i=0;i<l;i++)
    
	{
       
 		if(n==ptr[i])
        
		{
            
			printf("the number is found at index %d ",i);
            
			exit(0);
        
		}
    
	}
	   
	printf("the number not found \n");
	
}


