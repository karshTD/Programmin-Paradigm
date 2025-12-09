n = int(input())
arr = list(map(int, input().split()))

all_positive = all(x > 0 for x in arr)
any_palindrome = any(str(x) == str(x)[::-1] for x in arr)

print(all_positive and any_palindrome)
