n, x = map(int, input().split())
l = list(map(int, input().split()))

esquerda = 0
direita = 0
soma = 0

ok = False
while direita < n:
  soma += l[direita]
  direita+=1
  while soma > x and esquerda < direita:
    soma -= l[esquerda]
    esquerda += 1
  if soma == x:
    ok = True
    break

if ok:
  print("YES")
else: 
  print("NO")