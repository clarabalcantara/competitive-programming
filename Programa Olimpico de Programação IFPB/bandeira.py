n = int(input())
s = input().strip()

c1 = ''
c2 = ''

s1 = 0
s2 = 0

esquerda = 0
direita = 0
maior = 0
while direita < n:
  if c1 == '' or c1 == s[direita]:
    s1 += 1
    c1 = s[direita]
  elif c2 == '' or c2 == s[direita]:
    s2 += 1
    c2 = s[direita]
  else:
    while s1 > 0 and s2 > 0 and esquerda < direita:
      if s[esquerda] == c1:
        s1 -= 1
      elif s[esquerda] == c2:
        s2 -= 1
      esquerda += 1
    if s1 == 0:
      c1 = s[direita]
      s1 += 1
    else:
      c2 = s[direita]
      s2 += 1
  direita += 1
  maior = max(direita - esquerda, maior)

print(maior)