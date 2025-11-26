//Write a code to  find the Given number is prime or not....
#include <stdio.h>
#include <math.h> 
int Prime(int number)
{
    if (number <= 1) 
    {
        return 0;
}
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
int main() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (Prime(num)) 
    {
        printf("%d is a prime number.\n", num);
    }
        else 
    {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}
