n = int(input())
l = list(map(int, input().split()))

esquerda = 0
direita = 0

sum = [0, 0, 0]
menor = n
while direita < n:
  sum[l[direita]-1]+=1
  direita+=1
  if esquerda < direita:
    while sum[l[esquerda]-1] > 1:
      sum[l[esquerda]-1]-=1
      esquerda+=1
  if sum[0] > 0 and sum[1] > 0 and sum[2] > 0:
    menor = min(menor, direita - esquerda)

print(menor)