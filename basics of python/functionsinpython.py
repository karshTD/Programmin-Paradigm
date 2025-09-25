def add(a, b):
    return a + b

def subtract(a, b):
    return a - b

def multiply(a, b):
    return a * b

def divide(a, b):
    if b == 0:
        return "undefined"
    return a / b

def calculator():
    a = int(input())
    b = int(input())
    op = input()
    if op == '+':
        print(add(a, b))
    elif op == '-':
        print(subtract(a, b))
    elif op == '*':
        print(multiply(a, b))
    elif op == '/':
        print(divide(a, b))
    else:
        print("Invalid operator")

def reverse_integer(n):
    rev = 0
    while n != 0:
        rev = rev * 10 + n % 10
        n = n // 10
    return rev

def is_leap(year):
    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
        return True
    return False

def month_name(number):
    months = ["January", "February", "March", "April", "May", "June",
              "July", "August", "September", "October", "November", "December"]
    if 1 <= number <= 12:
        print(months[number - 1])
    else:
        print("Invalid month number")

def is_sorted(a, b, c):
    numbers = [a, b, c]
    if numbers == sorted(numbers):
        print(True)
    else:
        print(False)
    print(sorted(numbers))