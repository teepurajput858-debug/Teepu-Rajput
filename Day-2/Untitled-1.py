def find_sum_of_digits(number):
    # Handle negative numbers by taking the absolute value
    number = abs(number)
    digit_sum = 0
    
    while number > 0:
        # Extract the last digit
        digit = number % 10
        # Add the digit to the sum
        digit_sum += digit
        # Remove the last digit from the number
        number = number // 10
        
    return digit_sum

# Test the function
if __name__ == "__main__":
    # Example input
    num = int(input("Enter a number: "))
    result = find_sum_of_digits(num)
    print(f"Sum of digits: {result}")
