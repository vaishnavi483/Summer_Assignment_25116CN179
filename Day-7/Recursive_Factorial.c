#include <stdio.h>

// Function declaration
int factorial(int n);

int main() 
{
    int num;
    int result;

    printf("Enter a positive integer (0 to 12): ");
    scanf("%d", &num);

    // Safeguards to ensure the program outputs properly
    if (num < 0) 
    {
        printf("Factorial of a negative number doesn't exist.\n");
    } 
    else if (num > 12) 
    {
        printf("Number too large! Maximum limit for 'int' is 12.\n");
    } 
    else 
    {
        result = factorial(num);
        printf("Factorial of %d is: %d\n", num, result);
    }

    return 0;
}

// Recursive function using only int
int factorial(int n) 
{
    // Base case: 0! or 1! is 1
    if (n <= 1) 
    {
        return 1;
    }
    // Recursive call
    return n * factorial(n - 1);
}