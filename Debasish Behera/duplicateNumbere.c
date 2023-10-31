#include <stdio.h>

int findDuplicate(int* nums, int numsSize) {
    int tortoise = nums[0];
    int hare = nums[0];
    
    do {
        tortoise = nums[tortoise];
        hare = nums[nums[hare]];
    } while (tortoise != hare);
    
    tortoise = nums[0];
    while (tortoise != hare) {
        tortoise = nums[tortoise];
        hare = nums[hare];
    }
    
    return tortoise;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter the elements (1 to %d inclusive): ", n - 1);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int duplicate = findDuplicate(nums, n);
    printf("The duplicate number is: %d\n", duplicate);

    return 0;
}
