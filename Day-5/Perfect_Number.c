#include <stdio.h>
int main() 
{
    int num,i,sum = 0;

    printf("Enter an integer to check: ");
    if (scanf("%d", &num) != 1 || num <= 0) 
    {
        printf("Invalid input.Please enter a positive integer.\n");
        return 1;
    }

    // Finding proper divisors and calculate their sum
    for (i = 1; i <= num / 2; i++) 
    {
        if (num%i==0) 
        {
            sum += i;
        }
    }

    // Checking if the sum of divisors matches the original number
    if (sum==num) 
    {
        printf("%d is a Perfect Number.\n", num);
    } 
    else 
    {
        printf("%d is NOT a Perfect Number.\n", num);
    }

    return 0;
}