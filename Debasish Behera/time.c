#include <stdio.h>
#include <string.h>

int main() {
    char time[10];
    int hh, mm;
    char am_pm[3];

    printf("Enter time in 12-hour format (HH:MM AM/PM): ");
    scanf("%s", time);

    if (sscanf(time, "%d:%d %2s", &hh, &mm, am_pm) == 3) {
        if (strcmp(am_pm, "AM") == 0 || strcmp(am_pm, "am") == 0) {
            if (hh == 12) {
                hh = 0;
            }
        } else if (strcmp(am_pm, "PM") == 0 || strcmp(am_pm, "pm") == 0) {
            if (hh != 12) {
                hh += 12;
            }
        } else {
            printf("Invalid AM/PM format.\n");
            return 1;
        }

        if (hh >= 0 && hh <= 23 && mm >= 0 && mm <= 59) {
            printf("Time in 24-hour format: %02d%02d hrs\n", hh, mm);
        } else {
            printf("Invalid time format.\n");
        }
    } else {
        printf("Invalid input format.\n");
    }

    return 0;
}
