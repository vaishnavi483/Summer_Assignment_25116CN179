#include <stdio.h>
int main() 
{
    int num, i;

    // Prompting for input
    printf("Enter a positive integer:");
    scanf("%d", &num);

    // Handling negative numbers and zero
    if (num <= 0) 
    {
        printf("Please enter a positive integer greater than 0.\n");
        return 1; 
    }

    printf("Factors of %d are:", num);
    
    // Loop from 1 to the number itself
    for (i = 1; i <= num; ++i) 
    {
        // If num is perfectly divisible by i, then i is a factor
        if (num % i == 0) 
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}