def rotate_left(arr, k):
    n = len(arr)
    k = k % n  
    return arr[k:] + arr[:k]
n = int(input("Enter the number of elements in the array: "))
arr = list(map(int, input("Enter the elements of the array: ").split()))
k = int(input("Enter the number of steps to rotate left: "))

result = rotate_left(arr, k)
print("Rotated array:", result)
