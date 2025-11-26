//Write a code to find the given number is Even or Odd....
#include<stdio.h>
#include <conio.h>
int Even(int num) 
{
    if (num % 2 == 0)
        return 1;   
    else
        return 0;   
}

int main() 
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (Even(num))
        printf("The number is Even.\n");
    else
        printf("The number is Odd.\n");

    return 0;
}


