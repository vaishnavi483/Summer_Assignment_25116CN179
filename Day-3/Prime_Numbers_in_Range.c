int main() {
    int i, j, isPrime;

    printf("Prime numbers between 1 and 100 are:\n");

    // Loop through each number from 2 to 100 (1 is not prime)
    for (i = 2; i <= 100; i++) {
        isPrime = 1; // Assume the current number i is prime

        // Check if i has any factors other than 1 and itself
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // Factor found, so it's not prime
                break;       // Stop checking further for this number
            }
        }

        // If isPrime is still 1, the number is prime
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
} 