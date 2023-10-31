#include <stdio.h>

double Squareroot(int N) {
    double low = 0.0, high = N, mid, epsilon = 0.00001;
    
    while (high - low > epsilon) {
        mid = (low + high) / 2;
        
        if (mid * mid > N) {
            high = mid;
        } else {
            low = mid;
        }
    }
    
    return low;
}

int main() {
    int N;
    scanf("%d", &N);

    double result = Squareroot(N);
    printf("%.51f\n", result);

    return 0;
}
