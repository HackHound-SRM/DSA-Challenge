def get_inverse(n):
    str_n = str(n)
    inverse = [""] * len(str_n)
    for i, digit in enumerate(str_n):
        inverse[int(digit) - 1] = str(i + 1)
    return int("".join(inverse))
