def is_palindrome(num):
    # Negative numbers cannot be palindromes
    if num < 0:
        return False
        
    original = num
    reversed_num = 0
    
    while num > 0:
        remainder = num % 10          # Get the last digit
        reversed_num = (reversed_num * 10) + remainder  # Append to reversed number
        num = num // 10               # Remove the last digit
        
    return original == reversed_num

# Example usage:
test_number = 12321
if is_palindrome(test_number):
    print(f"{test_number} is a palindrome.")
else:
    print(f"{test_number} is not a palindrome.")
