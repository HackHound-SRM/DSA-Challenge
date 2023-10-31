#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int breakLevel;
    scanf("%d", &breakLevel);

    int attempts = 0;
    int currentLevel = 1;

    while (currentLevel <= N) {
        attempts++;
        if (currentLevel >= breakLevel) {
            break;
        }
        currentLevel++;
    }

    printf("%d\n", attempts);

    return 0;
}
