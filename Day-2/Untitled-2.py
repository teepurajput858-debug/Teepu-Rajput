def reverse_number(num):
    # Handle the negative sign
    sign = -1 if num < 0 else 1
    num = abs(num)
    
    reversed_num = 0
    while num > 0:
        # Extract the last digit
        last_digit = num % 10
        # Append it to the reversed number
        reversed_num = (reversed_num * 10) + last_digit
        # Remove the last digit from the original number
        num //= 10
        
    return sign * reversed_num

# Test cases
print(reverse_number(1234))   # Output: 4321
print(reverse_number(-567))   # Output: -765
print(reverse_number(1200))   # Output: 21
