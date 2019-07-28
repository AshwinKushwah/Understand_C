//Program to find the power (a, b) using recursion
//Author- Ashwin Kushwah
  
#include <stdio.h>

//function to find the power(a,b)

long long int power(int a, int b)
{
   if(b == 0)
    return 1;
    
    else
     return a*power(a,b-1);
}
int main()
{
   long long int a, b;
    scanf("%d%d", &a,&b);
    
    long long int result = power(a,b);
    
    printf(" ans =  %d", result);
    
    return 0;
}

