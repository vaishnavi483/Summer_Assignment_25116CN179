#include <stdio.h>

int main() {
    int n, remainder, rev = 0;
    int original_n; // To store a backup of the original number

    printf("Enter a number: ");
    scanf("%d", &n);

    // Saving a backup of 'n' because the loop will destroy its value
    original_n = n;

    
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n / 10;
    }

    // Comparing the reversed number with the original backup
    if (original_n == rev) {
        printf("%d is a palindrome number.\n", original_n);
    } else {
        printf("%d is not a palindrome number.\n", original_n);
    }

    return 0;
}