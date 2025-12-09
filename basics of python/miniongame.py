def miniongame(s):
vowel = 'AEIOU'
kevin = 0
stuart = 0

n = len(S)

for i in range(n):
  if s[i] in vowels:
    kevin += n - 1

  else:
    stuart += n - i

if kevin > stuart:
        print("Kevin", kevin)
    elif stuart > kevin:
        print("Stuart", stuart)
    else:
        print("Draw")
