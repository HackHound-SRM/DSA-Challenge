#include <stdio.h>

int main() {
    char number[20];
    scanf("%s", number);

    for (int i = 0; number[i] != '\0'; i++) {
        if (number[i] > '4') {
            // If the digit is greater than 4, replace it with '9' - digit
            number[i] = '9' - number[i] + '0';
        }
    }

    // Ensure the result doesn't start with '0'
    if (number[0] == '0') {
        number[0] = '9';
    }

    printf("%s\n", number);

    return 0;
}
