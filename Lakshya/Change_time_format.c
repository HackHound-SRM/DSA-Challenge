#include<stdio.h>
int main() {
    int timeH, timeM, _time, format;
    printf("Select AM or PM:\nAM - 1\nPM - 2\n>>>");
    scanf("%d", &format);
        printf("\nEnter HH:\n>>>");
        scanf("%d", &timeH);
        printf("Enter MM:\n>>>");
        scanf("%d", &timeM);
    switch (format) {
    case 1:
        _time = (timeH * 100) + timeM;
        break;
    
    case 2:
        _time = ((timeH + 12) * 100) + timeM;
        break;

    default:
    printf("Please enter a valid input.");
        break;
    }
    printf("\nTime in 24 hour format is:\n>>>%d", _time);
    return 0;
}