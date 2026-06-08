#include <stdio.h>
int main() 
{
    int rows = 5;
    for (int i = 1; i <= rows; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            // 'A' + 0 = A, 'A' + 1 = B, etc.
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}