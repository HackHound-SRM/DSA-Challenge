#include <stdio.h>

int main() {
    char s[10];
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        int d = s[i] - '0';
        if (d > 4) {
            d = 9 - d;
        }
        printf("%d", d);
    }

    return 0;
}
