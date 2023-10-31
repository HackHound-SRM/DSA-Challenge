#include <stdio.h>

int findLargestElement(int nums[], int size) {
    if (size == 0) {
        return -1;  // Return -1 for an empty array
    }

    int largest = nums[0];  // Initialize the largest element as the first element

    for (int i = 1; i < size; i++) {
        if (nums[i] > largest) {
            largest = nums[i];  // Update the largest element if a larger element is found
        }
    }

    return largest;
}

int main() {
    int nums[100];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Array size should be a positive integer.\n");
        return 1;
    }

    printf("Enter %d integers separated by spaces: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    int largest_element = findLargestElement(nums, size);

    if (largest_element == -1) {
        printf("The array is empty.\n");
    } else {
        printf("The largest element in the array is: %d\n", largest_element);
    }

    return 0;
}
