#include <stdio.h>

int main() {
    int minutes;
    scanf("%d", &minutes);

    int hours = minutes / 60;
    int remainingMinutes = minutes % 60;

    printf("%02d:%02d\n", hours, remainingMinutes);

    return 0;
}
