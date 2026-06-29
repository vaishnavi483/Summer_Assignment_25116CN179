#include <stdio.h>

// Function declaration
int fibonacci(int n);

int main() 
{
    int terms;

    printf("Enter the number of terms to print: ");
    scanf("%d", &terms);

    if (terms <= 0) 
    {
        printf("Please enter a number greater than 0.\n");
    } else 
    {
        printf("Fibonacci Series: ");
        
        // Loop through each position and print the returned recursive value
        for (int i = 0; i < terms; i++) 
        {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }

    return 0;
}

// Recursive function to find the value at position n
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
