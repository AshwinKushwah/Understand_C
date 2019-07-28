//Program to find the factorial of a given number using recursion
//Author- Ashwin Kushwah
#include <stdio.h>

int fact(int n)
{
     //base case
    if(n == 1 || n == 0)
    {
        return 1;
    }
    else
     return n*fact(n-1); // recursively calling the function
}
int main()
{
  int n;
  scanf("%d", &n);
  
  int result = fact(n); //calling fact(n) function
  printf("factorial = %d ", result);
  return 0;  
}

