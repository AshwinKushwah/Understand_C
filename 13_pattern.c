//Program to print the different patterns 
//Author- Ashwin Kushwah

//Pattern 1
        /*
                 1
               2   2
             3   3   3
           4   4   4   4
         5   5   5   5   5
        */
        
//Pattern 2 
      /*
      
                    1
                2       3
            4       5      6
         7      8      9     10
      
      */

//Pattern 3 
       /*
       
               *
            *     *
         *     *     *
     *     *      *     *
       
       */
       
#include <stdio.h>
void first_pattern()
{   
    printf("\n\nPatter 1 \n\n");
    for(int i=1; i<=5; i++)
    {
      for(int space = (5-i); space>0; space--)
     { 
         printf("  ");
       }
         
        for(int number = 1; number<=i; number++)
        {
            printf("%d ",i);
            printf("  ");
        }
        printf("\n");
    }
}

void second_pattern()
{
    
    printf("\n\nPatter 2 \n\n");
    int value = 1;
    for(int i=1;i<5;i++)
    {   
      
        for(int space =(5-i); space>0; space--)
        {
            printf("  ");
        }
        
        for(int number = 0; number<i; number++)
        {
            printf("%d ", value);
            printf("  ");
            value = value+1;
        }
        printf("\n");
    }
    
}

void third_pattern()
{
    printf("\n\nPatter 3 \n\n");
    for(int i = 1; i<5; i++)
    {
        
        for(int space = (5-i); space>0; space--)
        {
            printf("  ");
            
        }
        
        for(int pattern = 1; pattern<=i; pattern++)
        {
            printf("*");
            printf("   ");
        }
        
        printf("\n");
    }
}

int main()
{
   first_pattern();
   
   second_pattern();
   
   third_pattern();
   
   return 0;
}

