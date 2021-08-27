#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,temp;
    int *ar;
    printf("enter the array size \n");
    scanf("%d",&n);
    ar=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("enter the element \n");
        scanf("%d",&ar[i]);
    }
    printf("array elements before bubble sort \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
     printf("\n array elements after bubble sort \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
}