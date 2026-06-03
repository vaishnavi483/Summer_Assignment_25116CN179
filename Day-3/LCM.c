#include <stdio.h>

int main() 
{
    int n1, n2, max;

    printf("Enter two integers for LCM: ");
    scanf("%d %d", &n1, &n2);

    // Finding the maximum of the two numbers
    max = (n1 > n2) ? n1 : n2;

    // Loop runs infinitely until LCM is found
    while(1)
     {
        if(max % n1 == 0 && max % n2 == 0) 
        {
            printf("LCM is: %d\n", max);
            break; // Exiting the loop once LCM is found
        }
        max++; // Checking the next number
    }

    return 0;
}