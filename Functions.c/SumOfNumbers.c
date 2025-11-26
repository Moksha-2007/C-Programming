#include <stdio.h>
int sum_numbers(int n);
int main() 
{
    int limit = 10;
    int total_sum = sum_numbers(limit);  
    printf("The sum of numbers from 1 to %d is: %d\n", limit, total_sum);  
    return 0;
}
int sum_numbers(int n) 
{
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

