n, m = map(int, input().split())
x = list(map(int, input().split()))

esquerda = 0
direita = m - 1

xorIntervalo = 0
for xi in x[esquerda:direita + 1]:
    xorIntervalo = xorIntervalo ^ xi
maiorXor = xorIntervalo

while direita < n - 1:
    xorIntervalo = xorIntervalo ^ x[esquerda]  # remover x[esquerda]
    esquerda += 1
    direita += 1
    xorIntervalo = xorIntervalo ^ x[direita]  # adicionar x[direita]

    if xorIntervalo > maiorXor:
        maiorXor = xorIntervalo

print(maiorXor)