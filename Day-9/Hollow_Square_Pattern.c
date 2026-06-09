#include <stdio.h>
int main() 
{
    int n = 5;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            // Print '*' if it's the first row, last row, first column, or last column
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) 
            {
                printf("*");
            } 
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}