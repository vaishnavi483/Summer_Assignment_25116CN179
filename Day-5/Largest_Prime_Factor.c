#include <stdio.h>
int main() 
{
    int num,largest_pf=-1,i;

    // Prompting the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) 
    {
        printf("Numbers less than or equal to 1 do not have prime factors.\n");
        return 0;
    }

    while (num % 2 == 0) 
    {
        largest_pf = 2;
        num /= 2;
    }

    // Looking for odd prime factors
    for (i = 3; i * i <= num; i += 2) 
    {
        while (num % i == 0) 
        {
            largest_pf = i;
            num /= i;
        }
    }

    // If the remaining num is greater than 2, it's prime
    if (num > 2) 
    {
        largest_pf = num;
    }

    printf("The largest prime factor is: %d\n", largest_pf);
    return 0;
}