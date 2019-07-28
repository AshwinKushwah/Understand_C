//Program to implement a function to interchange two integer values
//using call-by-reference technique.
//Author- Ashwin Kushwah
  
#include <stdio.h>

//function to swap values using reference
void swap_reference(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
int main()
{
    int a, b;
    scanf("%d%d", &a,&b);
    
    printf("value of a and b before swapping a = %d, b = %d ",a,b);
    
    swap_reference(&a,&b); //call-by-reference
    
    printf("\nvalue of a and b after swapping a = %d, b = %d ",a,b);

    
    return 0;
}

