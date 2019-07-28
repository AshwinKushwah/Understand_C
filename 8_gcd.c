//Program to find the GCD of two numbers
//Author- Ashwin Kushwah
#include <stdio.h>


//using Euclidean Algorithm 
//to find the gcd (efficeint approach)
int gcd(int a, int b)
{
   if(a == 0)
     return b;
   else
     return gcd(b%a, a);
}
int main()
{
  int a,b;
  scanf("%d%d", &a,&b);
  
  int result  = gcd(a,b);
  
  printf("%d", result);
  return 0;  
}

