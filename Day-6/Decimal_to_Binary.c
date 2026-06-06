#include <stdio.h>
int main() 
{
    int decimal, temp,binary = 0,place = 1;
    printf("Enter a decimal number (0 to 1023): ");
    scanf("%d", &decimal);

    temp = decimal;

    while (temp > 0) 
    {
        int remainder = temp % 2;
        binary = binary + (remainder * place);
        place = place * 10;
        temp = temp / 2;
    }

    printf("Binary equivalent: %d\n", binary);

    return 0;
}