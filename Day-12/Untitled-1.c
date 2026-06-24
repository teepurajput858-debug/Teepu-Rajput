#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if an integer is a palindrome
bool isNumberPalindrome(int num) {
    int original = num;
    int reversed = 0;
    int remainder;

    // Negative numbers are not palindromes
    if (num < 0) {
        return false;
    }

    while (num != 0) {
        remainder = num % 10;
        reversed = (reversed * 10) + remainder;
        num /= 10;
    }

    return original == reversed;
}

// Function to check if a string is a palindrome
bool isStringPalindrome(const char *str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return false; // Mismatch found
        }
        start++;
        end--;
    }
    return true; // All characters matched
}

int main() {
    int number = 12321;
    char word[] = "radar";

    // 1. Test Number Palindrome Function
    if (isNumberPalindrome(number)) {
        printf("The number %d is a palindrome.\n", number);
    } else {
        printf("The number %d is not a palindrome.\n", number);
    }

    // 2. Test String Palindrome Function
    if (isStringPalindrome(word)) {
        printf("The string \"%s\" is a palindrome.\n", word);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", word);
    }

    return 0;
}
