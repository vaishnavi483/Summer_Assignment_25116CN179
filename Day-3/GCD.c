#include <stdio.h>

int main() {
    int n1, n2, gcd;

    printf("Enter two integers for GCD: ");
    scanf("%d %d", &n1, &n2);

    // Loop from 1 up to the smaller of the two numbers
    for(int i = 1; i <= n1 && i <= n2; ++i) 
    {
        // Checking if i is a factor of both integers
        if(n1 % i == 0 && n2 % i == 0) 
        {
            gcd = i; // Updating GCD whenever a common factor is found
        }
    }

    printf("GCD is: %d\n", gcd);

    return 0;
}