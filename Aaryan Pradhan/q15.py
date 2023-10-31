def ts(nums, t):
    d = {}
    for i, n in enumerate(nums):
        c = t - n
        if c in d:
            return [d[c], i]
        d[n] = i
    return []

t = int(input("Enter the target: "))
n = list(map(int, input("Enter numbers separated by spaces: ").split()))

r = ts(n, t)

if r:
    print(f"Indices of two numbers that add up to the target: {r}")
else:
    print("No solution found.")