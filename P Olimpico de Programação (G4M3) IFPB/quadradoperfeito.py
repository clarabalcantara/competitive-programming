def bs(inicio, fim, valor):
  meio = (fim + inicio) // 2
  if(meio * meio == valor):
    return meio
  elif meio == inicio or meio == fim:
    return -1
  elif meio * meio > valor :
    return bs(inicio, meio, valor)
  return bs(meio, fim, valor)

n = int(input())

if bs(1, n, n) == -1:
  print("NAO")
else:
  print("SIM")