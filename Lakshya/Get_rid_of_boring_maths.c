#include <stdio.h>
 
int floorSqrt(int N);

int main()
{
    int N;
    printf("Enter the number whose square root you want to calculate:\n>>>");
    scanf("%d", &N);
    printf("\nSquare root of %d is:\n>>>%d\n", N, floorSqrt(N));
    return 0;
}

int floorSqrt(int N)
{
    if (N == 0 || N == 1)
        return N;
    int i = 1, result = 1;
    while (result <= N) {
        i++;
        result = i * i;
    }
    return i - 1;
}