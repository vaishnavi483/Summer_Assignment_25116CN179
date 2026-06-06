#include <stdio.h>
int main() 
{
    int num,temp,count = 0;
   
    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;

    // Loop until the number becomes 0
    while (temp > 0) 
    {
        // Check if the last bit is 1
        if (temp % 2 != 0) 
        {
            count++;
        }
        // Shift right by dividing by 2
        temp = temp / 2;
    }

    printf("Number of set bits (1s) in %d is: %d\n", num, count);

    return 0;
}