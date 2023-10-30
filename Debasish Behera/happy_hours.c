#include <stdio.h>

void convertMinutesToHoursMinutes(int minutes) {
    int hours = minutes / 60;  // Calculate the hours
    int remainingMinutes = minutes % 60;  // Calculate the remaining minutes

    printf("%02d:%02d\n", hours, remainingMinutes);
}

int main() {
    int minutes;
    
    // Input
    printf("Enter the time in minutes: ");
    scanf("%d", &minutes);
    
    // Convert and output
    convertMinutesToHoursMinutes(minutes);
    
    return 0;
}
