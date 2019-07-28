//Program to generate fibonacci sequence upto n terms 
//Author- Ashwin Kushwah
#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int first = 0 , second = 1; //first and second numbers are 0 and 1 respectively
  
  printf("%d %d ",first, second);
  
 
  int result;
  if(n>2)
  {
      for(int count = 1; count<=n-2; count++)
      {
         
          result = first + second;
          printf("%d ",result);
          first = second;
          second = result;
      }
  }
  
  return 0;  
}

