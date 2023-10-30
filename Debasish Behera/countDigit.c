#include <stdio.h>
#include <stdlib.h>

// Function to count the occurrences of a digit K in a number N
int countDigitOccurrences(int N, int K) {
    int count = 0;
    // Convert N to a string
    char numStr[20];
    sprintf(numStr, "%d", N);

    // Iterate through the characters in the string
    for (int i = 0; numStr[i] != '\0'; i++) {
        if (numStr[i] - '0' == K) {
            count++;
        }
    }

    return count;
}

int main() {
    int N, K;
    printf("Enter the number N: ");
    scanf("%d", &N);
    printf("Enter the digit K: ");
    scanf("%d", &K);

    int result = countDigitOccurrences(N, K);

    printf("The digit %d appears in %d %d times.\n", K, N, result);

    return 0;
}
