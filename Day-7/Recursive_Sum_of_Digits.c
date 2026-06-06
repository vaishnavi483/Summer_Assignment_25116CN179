#include <stdio.h>

// Function declaration
int sumOfDigits(int n);

int main() 
{
    int num, result;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // If user enters a negative number, make it positive
    if (num < 0) 
    {
        num = -num;
    }

    result = sumOfDigits(num);

    printf("Sum of digits: %d\n", result);

    return 0;
}

// Recursive function definition
int sumOfDigits(int n) 
{
    // Base case: if the number becomes 0, stop and return 0
    if (n == 0) 
    {
        return 0;
    }
    
    // Recursive case: grab the last digit + process the rest of the digits
    return (n % 10) + sumOfDigits(n / 10);
}