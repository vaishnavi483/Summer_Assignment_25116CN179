#include <stdio.h>

// Function declaration
int reverseNumber(int n, int reversed);

int main() 
{
    int num, result;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers by printing the negative sign first
    if (num < 0) 
    {
        printf("Reversed number: -");
        num = -num;
    } 
    else 
    {
        printf("Reversed number: ");
    }

    // Call the recursive function starting with an initial reversed value of 0
    result = reverseNumber(num, 0);
    
    printf("%d\n", result);

    return 0;
}

// Recursive function definition
int reverseNumber(int n, int reversed) 
{
    // Base case: when the remaining number becomes 0, return the accumulated result
    if (n == 0) 
    {
        return reversed;
    }

    // Shift previous digits left (multiply by 10) and add the last digit of n
    reversed = (reversed * 10) + (n % 10);

    // Recursive call with the remaining digits of n
    return reverseNumber(n / 10, reversed);
}