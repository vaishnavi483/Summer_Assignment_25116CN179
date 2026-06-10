#include <stdio.h>
int main() 
{
    int n = 5; // Number of rows
    
    for (int i = n; i >= 1; i--) 
    {
        // 1. Printing leading spaces
        for (int j = 1; j <= n - i; j++) 
        {
            printf(" ");
        }
        // Printing stars (2*i - 1 stars per row)
        for (int k = 1; k <= (2 * i - 1); k++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}