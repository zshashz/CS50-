// Program 23: Program to find the sum of digits of a number

#include <stdio.h>
 
/* Function to get sum of digits */
int getSum(int n)
{
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
 
// Driver code
int main()
{
    int n = 687;
    printf(" %d ", getSum(n));
    return 0;
}
