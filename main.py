soma = 0

for x in range(3):
  soma += float(input("Informe a {0}ª nota: ".format(x+1)))

nFinal = soma / 3

if (nFinal >= 60):
  a = int(input("Informe a quantos grupos minoritários a pessoa pertence: "))
  if (a >= 3):
    nFinal *= 1.15
  if (a == 2):
    nFinal *= 1.10
  if (a == 1):
    nFinal *= 1.05

print("Nota final: {:.2f}".format(nFinal))