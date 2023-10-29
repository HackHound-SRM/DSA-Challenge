def car(N, car_numbers):
    
    result = []
    for car_number in car_numbers:
        even_sum = 0
        odd_sum = 0
        for digit in str(car_number):
            if int(digit) % 2 == 0:
                even_sum += int(digit)
            else:
                odd_sum += int(digit)
        if even_sum % 4 == 0 or odd_sum % 3 == 0:
            result.append("Yes")
        else:
            result.append("No")
    return result
