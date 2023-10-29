def bubble_sort(nums):
    n = len(nums)
    for i in range(n):
        for j in range(0, n-i-1):
            if nums[j] < nums[j+1]:
                nums[j], nums[j+1] = nums[j+1], nums[j]
    return nums

nums = [5, 0, -1, 3, 6, 9, 2, 7]
nums = bubble_sort(nums)
print(nums)
