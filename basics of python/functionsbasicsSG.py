a = int(input())
b = int(input())
c = int(input())
if a >= b and a >= c:
    print(a)
elif b >= a and b >= c:
    print(b)
else:
    print(c)

n = int(input())
fact = 1
for i in range(1, n + 1):
    fact *= i
print(fact)

ch = input()
if c():
    print("Digit")
elif ch.isupper():
    print("Uppercase")
elif ch.islower():
    print("Lowercase")
else:
    print("Other")

count = 0
total = 0
while True:
    num = int(input())
    if num < 0:
        break
    if num % 2 != 0:
        count += 1
        total += num
if count > 0:
    avg = total / count
else:
    avg = 0
print(count, total, avg)

s = input()
print(s.swapcase())

card = input()
if card.isdigit() and (len(card) == 13 or len(card) == 15 or len(card) == 16):
    print("Valid")
else:
    print("Invalid")
