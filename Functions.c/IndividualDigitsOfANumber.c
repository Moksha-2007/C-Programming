#include <stdio.h>
void print_digits(int n);
int main() 
{
    int number = 12345;
    printf("The digits of the number %d are: \n", number);
    print_digits(number);
    return 0;
}
void print_digits(int n) 
{
    if (n == 0)
    {
        printf("0\n"); 
        return;
    }
    int digits[20]; 
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        digits[count] = temp % 10; 
        temp /= 10;                
        count++;                 
    }
    for (int i = count - 1; i >= 0; i--)
    {
        printf("%d\n", digits[i]);
    }
}
