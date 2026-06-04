#include <stdio.h>
int main() 
{
    int num,originalNum,remainder,digits,temp,power,result;

    printf("Armstrong numbers between 1 and 100 are:\n");

    for (num = 1; num <= 100; num++) 
    {
        originalNum = num;
        
        // Counting digits for the current number
        digits = 0;
        temp = num;
        while (temp != 0) 
        {
            temp /= 10;
            digits++;
        }

        temp = num;
        result = 0;

        // Computing sum of digits raised to the power of 'digits'
        while (temp != 0) 
        {
            remainder = temp % 10;

            power = 1;
            for (int i = 0; i < digits; i++) 
            {
                power *= remainder;
            }

            result += power;
            temp /= 10;
        }

        // Printing if it matches the original number
        if (originalNum == result) 
        {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}