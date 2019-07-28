
//Program to reverse the given number
//Author : Ashwin Kushwah

#include<stdio.h>

int main()
{
    int n,rem;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("reverse of number = ");
    while(n>0)
    {
        rem = n % 10 ; //extractingg the last digit of number
        printf("%d", rem);
        n = n / 10 ; // reducing the number to one digit
    }
}