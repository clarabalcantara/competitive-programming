n = int(input())

for _ in range(n):
  m = int(input())
  str = input().strip()
  y = False
  e = False
  s = False
  c = 0
  for i in range(m):
    if str[i] == 'y':
      y = True
    elif str[i] == 'e' and y:
      e = True
    elif str[i] == 's' and y and e:
      s = True

    if y and e and s:
      c += 1
      y = False
      e = False
      s = False
  print(c)