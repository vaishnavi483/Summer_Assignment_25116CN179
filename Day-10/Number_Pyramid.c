#include <stdio.h>
int main() 
{
    int n = 5; // Number of rows
    for (int i = 1; i <= n; i++) 
    {
        // 1. Printing leading spaces
        for (int j = 1; j <= n - i; j++) 
        {
            printf(" ");
        }
        
        // 2. Printing increasing numbers from 1 to i
        for (int k = 1; k <= i; k++) 
        {
            printf("%d", k);
        }
        
        // 3. Printing decreasing numbers from i-1 down to 1
        for (int k = i - 1; k >= 1; k--) 
        {
            printf("%d", k);
        }
        
        printf("\n");
    }
    return 0;
}