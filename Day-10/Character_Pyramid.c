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
        
        // 2. Printing increasing characters starting from 'A'
        char ch = 'A';
        for (int k = 1; k <= i; k++) 
        {
            printf("%c", ch);
            ch++;
        }
        
        // 3. Printing decreasing characters back down
        ch -= 2;
        for (int k = i - 1; k >= 1; k--) 
        {
            printf("%c", ch);
            ch--;
        }
        
        printf("\n");
    }
    return 0;
}