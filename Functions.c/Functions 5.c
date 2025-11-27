//Write a code to print the reverse of a given number
#include <stdio.h>
int reverse_number(int n);
int main() 
{
    int original_num, reversed_num;
    printf("Enter an integer to reverse: ");
    scanf("%d", &original_num);
    reversed_num = reverse_number(original_num);
    printf("The original number is: %d\n", original_num);
    printf("The reversed number is: %d\n", reversed_num);
    return 0;
}
int reverse_number(int n) 
{
    int reversed = 0;
    int remainder;
    while (n != 0) 
    {
        remainder = n % 10;      
        reversed = reversed * 10 + remainder; 
        n /= 10;                 
    }
    return reversed; 
}




