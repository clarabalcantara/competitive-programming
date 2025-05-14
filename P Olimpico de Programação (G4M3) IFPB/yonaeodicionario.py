def bs(dic, inicio, fim, valor, m):
  meio = (fim + inicio) // 2
  if(dic[meio][0] <= valor and dic[meio][m-1] >= valor):
    return meio
  elif(dic[meio][0] > valor):
    return bs(dic, inicio, meio - 1, valor, m)
  return bs(dic, meio + 1, fim, valor, m)

n, m = map(int, input().split())
dic = []

for _ in range(n):
  l = list(input().split(" "))
  dic.append(l)

q = int(input())

for _ in range(q):
  s = input()
  page = bs(dic, 0, n-1, s, m)
  print(f"{s} {page+1}")
