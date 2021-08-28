#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char str[20],rev[20];
  int i,j,l;
  printf("enter the string \n");
  gets(str);
  l=strlen(str);
  for(i=0,j=l-1;i<l;i++,j--)
  {
      rev[i]=str[j];
  }
  printf("original string  : %s \n",str);
  printf("reversed string  : %s \n",rev);
  return 0;
}
