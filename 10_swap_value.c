//Program to implement a function to interchange two integer values
//using call-by-value technique.
//Author- Ashwin Kushwah

#include <stdio.h>

void swap_value(int a, int b)
{
    printf("value of a and b before swapping a = %d, b = %d ",a,b);
    int temp = b;
    b = a;
    a = temp;
    printf("\nvalue of a and b after swapping a = %d, b = %d ",a,b);
}
int main()
{
    int a, b;
    scanf("%d%d", &a,&b);
    
    swap_value(a,b);
   
    return 0;
}

