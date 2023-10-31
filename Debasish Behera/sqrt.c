#include <stdio.h>
#include <math.h>

// Function to calculate the square root of N
double Squareroot(int N) {
    if (N < 0) {
        // Square root of a negative number is undefined
        printf("Cannot calculate square root of a negative number\n");
        return -1.0; // You can choose an appropriate error value here
    }
    
    return sqrt(N);
}

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    double result = Squareroot(N);

    if (result >= 0) {
        printf("The square root of %d is %f\n", N, result);
    }

    return 0;
}
