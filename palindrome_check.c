#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
  char name[20];
  int i,j,l;
  printf("enter the string \n");
  scanf("%s",name);
  l=strlen(name);
  for(i=0,j=l-1;i<(l/2);i++,j--)
  {
      if(name[i]!=name[j])
      {
          printf("not a palindrome string \n");
          exit(0);
      }
  }
  printf("string is palindrome \n");
  return 0;
}

