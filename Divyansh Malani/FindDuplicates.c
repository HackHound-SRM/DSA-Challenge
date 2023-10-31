#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int duplicates[n];

    for (int i = 0; i < n; i++) {
        int current = nums[i];
        for (int j = i + 1; j < n; j++) {
            if (current == nums[j]) {
                printf("%d\n", current);
                break;
            }
        }
    }

    return 0;
}
