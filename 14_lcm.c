//Program to find the LCM of two number
//Author- Ashwin Kushwah

#include<stdio.h>

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
  
  //using the formula lcm(a,b) = (a*b)/gcd(a,b)
  int mediator  = gcd(a,b);
  
  int result = (a*b)/mediator;
  
  printf("LCM of %d and %d is = %d", a,b,result);
  
  return 0;
} 
