#include <stdio.h>
int main() 
{
    int x, n;
    int result = 1;

    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (n): ");
    scanf("%d", &n);

    // Loop n times to multiply x
    for (int i = 1; i <= n; i++) 
    {
        result = result * x;
    }

    printf("%d to the power %d is: %d\n", x, n, result);

    return 0;
}