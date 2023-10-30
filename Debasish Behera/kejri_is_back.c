#include <stdio.h>

// Function to calculate the sum of even digits in a number
int sumOfEvenDigits(int number) {
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 0) {
            sum += digit;
        }
        number /= 10;
    }
    return sum;
}

// Function to calculate the sum of odd digits in a number
int sumOfOddDigits(int number) {
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 != 0) {
            sum += digit;
        }
        number /= 10;
    }
    return sum;
}

int main() {
    int N;
    printf("Enter the car number (N): ");
    scanf("%d", &N);

    int evenSum = sumOfEvenDigits(N);
    int oddSum = sumOfOddDigits(N);

    if (evenSum % 4 == 0 || oddSum % 3 == 0) {
        printf("The car with number %d is allowed to run on Sunday.\n", N);
    } else {
        printf("The car with number %d is not allowed to run on Sunday.\n", N);
    }

    return 0;
}
