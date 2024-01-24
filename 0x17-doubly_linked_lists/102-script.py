def is_palindrome(num):
    # Convert the number to a string and check if it reads the same backward
    return (str(num) == str(num)[::-1])

def find_largest_palindrome():
    largest_palindrome = 0

    # Loop through all combinations of three-digit numbers
    for i in range(100, 1000):
        for j in range(100, 1000):
            product = i * j

            # Check if the product is a palindrome and larger than the current largest
            if is_palindrome(product) and product > largest_palindrome:
                largest_palindrome = product

    return largest_palindrome


result = find_largest_palindrome()
print(result)
