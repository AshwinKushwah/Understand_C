//Program to check the given number is prime or not
//Author- Ashwin Kushwah
#include <stdio.h>
int main()
{
   int n;
   scanf("%d", &n);
   
   int flag = 1;
   
   if(n%2 == 0)
   {
       flag = 0;
       printf(".");
   }
   else
   {
     for(int i=3; i<=(n/2); i+=2)
      {
           if(n%i == 0)
             {
                 flag = 0;
                 break;
             }
        }
   }
   
   if(flag == 1)
     printf("%d is a prime number" , n);
     
   else
     printf("%d is not a prime number" , n);
    return 0;
}

