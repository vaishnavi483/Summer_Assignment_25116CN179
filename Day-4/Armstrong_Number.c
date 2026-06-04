#include <stdio.h>
int main()
{
    int num,originalNum,remainder,digits=0,result=0;

    printf("Enter an integer to check: ");
    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    originalNum = num;

    //  Counting the number of digits
    int temp = num;
    while (temp != 0) 
    {
        temp /= 10;
        digits++;
    }

    temp = num;

    // Computing the sum of the power of individual digits
    while (temp != 0) 
    {
        remainder = temp % 10;

        // Computing remainder raised to the power of 'digits'
        int power = 1;
        for (int i = 0; i < digits; i++) 
        {
            power *= remainder;
        }

        result += power;
        temp /= 10;
    }

    // Checking if the sum matches the original number
    if (originalNum == result) 
    {
        printf("%d is an Armstrong number.\n", num);
    } else 
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}