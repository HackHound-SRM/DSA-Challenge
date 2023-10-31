#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        int carNumber;
        scanf("%d", &carNumber);

        int evenSum = 0, oddSum = 0;
        while (carNumber > 0) {
            int digit = carNumber % 10;
            if (digit % 2 == 0) {
                evenSum += digit;
            } else {
                oddSum += digit;
            }
            carNumber /= 10;
        }

        if (evenSum % 4 == 0 || oddSum % 3 == 0) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
