def is_valid(s):
    stack = []
    mapping = {')': '(', '}': '{', ']': '['}

    for char in s:
        if char in mapping:
            top_element = stack.pop() if stack else '#'
            if top_element != mapping[char]:
                return False
        else:
            stack.append(char)

    return not stack  
input_string = input("Enter a string containing brackets: ")
if is_valid(input_string):
    print("True")
else:
    print("False")
