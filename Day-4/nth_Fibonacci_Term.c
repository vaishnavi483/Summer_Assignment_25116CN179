#include <stdio.h>
int main()
{
    int n, i;
    int t1 = 0, t2 = 1, nthTerm = 0;

    printf("Enter the position (n) of the Fibonacci term: ");
    if (scanf("%d", &n) != 1 || n <= 0) 
    {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    // Logic to find the nth term
    if (n == 1)
    {
        nthTerm = t1;
    } 
    else if (n == 2)
    {
        nthTerm = t2;
    } 
    else 
    {
        // Loop runs from the 3rd term up to the nth term
        for (i = 3; i <= n; ++i) 
        {
            nthTerm = t1 + t2;
            t1 = t2;
            t2 = nthTerm;
        }
    }

    printf("The %d-th Fibonacci term is: %lld\n", n, (n == 2) ? t2 : nthTerm);
    return 0;
}