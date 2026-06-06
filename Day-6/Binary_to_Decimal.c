#include <stdio.h>
int main() 
{
    int binary, temp,decimal = 0,base = 1;
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    temp = binary;

    while (temp > 0) 
    {
        int last_digit = temp % 10; // Extract the last digit (0 or 1)
        decimal = decimal + (last_digit * base);
        base = base * 2;            // Move to the next power of 2
        temp = temp / 10;           // Remove the last digit
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}