#include <stdio.h>

int main() {
    double celsius;
    scanf("%lf", &celsius);

    double fahrenheit = (celsius * 9 / 5) + 32;
    
    printf("%.2f\n", fahrenheit);
    
    return 0;
}
