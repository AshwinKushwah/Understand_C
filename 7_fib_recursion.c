//Program to generate the fibonacci sequence upto n terms using recursion
//Author- Ashwin Kushwah
#include <stdio.h>

int fib(int n)
{
   //declaring the variables as static 
   //to not reinitialize the value on each function call    
   static long int first = 0, second = 1, result;
  
   if(n>2)
    {
        result = first + second;
        printf(" %d ", result);
        first = second;
        second = result;
        
        fib(n-1);
    }
    else
     {
         printf("\n");
     }
}
int main()
{
  int n;
  scanf("%d", &n);
  printf("%d  %d ", 0,1);
   fib(n); //calling fib(n) function
  
  return 0;  
}

