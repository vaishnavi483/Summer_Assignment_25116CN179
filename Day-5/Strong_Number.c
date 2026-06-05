#include <stdio.h>
int main() 
{
    int num, originalNum, remainder, sum = 0;

    printf("Enter an integer to check:");
    if (scanf("%d", &num) != 1 || num < 0) 
    {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    originalNum = num;

    // Handling the edge case for 0 explicitly (0! = 1)
    if (num == 0) 
    {
        sum = 1;
    } 
    else 
    {
        int temp = num;
        // Extracting digits and calculate the sum of their factorials
        while (temp > 0) 
        {
            remainder = temp % 10;

            // Calculating factorial of the current digit inline
            int fact = 1;
            for (int i = 1; i <= remainder; i++) 
            {
                fact *= i;
            }

            sum += fact;
            temp /= 10;
        }
    }

    // Verifying if the calculated sum matches the original number
    if (sum == originalNum) 
    {
        printf("%d is a Strong Number.\n", originalNum);
    } 
    else 
    {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }

    return 0;
}