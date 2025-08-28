def largest_of_three():
    a = float(input("Enter first number: "))
    b = float(input("Enter second number: "))
    c = float(input("Enter third number: "))
    print("Largest number is:", max(a, b, c))

def factorial():
    n = int(input("Enter a number: "))
    result = 1
    for i in range(1, n + 1):
        result *= i
    print("Factorial:", result)

def check_character():
    ch = input("Enter a character: ")
    if ch.isdigit():
        print("It is a digit")
    elif ch.isupper():
        print("It is an uppercase letter")
    elif ch.islower():
        print("It is a lowercase letter")
    else:
        print("It is a special character")

def odd_stats():
    count = 0
    total = 0
    while True:
        n = int(input("Enter a number (negative to stop): "))
        if n < 0:
            break
        if n % 2 != 0:
            count += 1
            total += n
    if count == 0:
        print("No odd numbers entered")
    else:
        print("Count of odd numbers:", count)
        print("Sum:", total)
        print("Average:", total / count)

def swap_case():
    s = input("Enter a string: ")
    print("Swapped case:", s.swapcase())

def validate_credit_card():
    import re
    card = input("Enter credit card number: ")
    pattern = r'^(?!.*(\d)(-?\1){3})[456]\d{3}(-?\d{4}){3}$'
    if re.fullmatch(pattern, card):
        print("Valid")
    else:
        print("Invalid")

while True:
    print("\nMenu:")
    print("1. Find largest of three numbers")
    print("2. Factorial of a number")
    print("3. Check character type")
    print("4. Count, sum, average of odd numbers")
    print("5. Swap case")
    print("6. Validate credit card")
    print("7. Exit")
    choice = input("Enter your choice (1-7): ")
    if choice == '1':
        largest_of_three()
    elif choice == '2':
        factorial()
    elif choice == '3':
        check_character()
    elif choice == '4':
        odd_stats()
    elif choice == '5':
        swap_case()
    elif choice == '6':
        validate_credit_card()
    elif choice == '7':
        break
    else:
        print("Invalid choice")
