#include <stdio.h>
int main()
{
    int n,i;
    int t1 = 0,t2 = 1,nextTerm;

    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) 
    {
        printf("Please enter a valid positive integer.\n");
        return 1; 
    }

    printf("Fibonacci Series up to %d terms:\n",n);

    for (i = 1; i <= n; ++i) 
    {
        printf("%d",t1);
        
        // Printing a comma after each term except the last one
        if (i < n)
        {
            printf(", ");
        }

        // Calculating the next term and updating variables
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    
    printf("\n");
    return 0;
}