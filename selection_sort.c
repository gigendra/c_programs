#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,temp,loc,min,l;
    int *ar;
    printf("enter the array size \n");
    scanf("%d",&n);
    ar=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("enter the element \n");
        scanf("%d",&ar[i]);
    }
    printf("array elements before selection sort \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }

   for(i=0;i<n;i++)
    {
        min=ar[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>ar[j])
            {
                min=ar[j];
                loc=j;
            }
        }
        if(i!=loc)
        {
            temp=ar[i];
            ar[i]=ar[loc];
            ar[loc]=temp;
        }
    }
     printf("\n array elements after selection sort \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
} 
