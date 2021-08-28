/* documentation section */
    //this program implements the binary search method recursive way)                        
    //binary search is performed on a sorted array 
    //the memmory is dynamically allocated for the array elemnts using the function calloc()

/* link section */
#include<stdio.h>
#include<stdlib.h>

/* global declaration section */
int *p,i,j,lim,n,l=0;
int u;
void input();
void print();
void BinarySearch(int *p,int lb,int ub,int n);

/* main function section */
void main()
{
 input();
 print(); 
 BinarySearch(p,l,u,n); 
}

/* user defined function section */
void input()
{
    
	printf("enter the limit for the array \n");
	scanf("%d",&lim);
	p=(int*)calloc(l,sizeof(int));
	
	u=lim-1;
	
	printf("enter the elements in ascending order \n");
	for(i=0;i<lim;i++)
    
	{
        
		scanf("%d",&p[i]);
    
	}
	printf("\n enter the element to find \n");
	scanf("%d",&n);
}

void print()
{
	printf("the array elements are \n");
   
	for(i=0;i<lim;i++)
    
	{
        
		printf("%d ",p[i]);
    
	}
	
}

void BinarySearch(int *ptr,int l,int u,int n)
{
	int mid;
	if(l<=u)
	{
	    mid=(l+u)/2 ;
	    if(ptr[mid]==n)
	    {
	        printf("\n the number is found at index %d ",mid);
			exit(0);
	        
	    }
	    else if(ptr[mid]<n)
	    {
	       BinarySearch(ptr,mid+1,u,n);
	        
	    }
	    else if(ptr[mid]>n)
	    {
	       BinarySearch(ptr,l,mid-1,n);
	        
	    }
    }
    printf("\n the number not found ");
    exit(0);
}


