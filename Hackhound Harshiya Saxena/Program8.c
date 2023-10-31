#include <stdio.h>
#include <string.h>
int main() {
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        char answer[3];
        printf("Test case %d: ", i);
        scanf("%s", answer);

        if (strcmp(answer, "yes") == 0) {
            printf("Minimum level at which phone will break %d\n", i);
            break;
        }
    }
    return 0;
}
