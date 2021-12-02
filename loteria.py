import random

def apostas():
    lista = []
    while len(lista) != 6:
        j = random.randint(1,60)
        if j not in lista:
            lista.append(j)
    return lista

jogos = int(input("quantos jogos?\n"))
cont = 1

while jogos > 0:
    print(f"aposta {cont} :",*apostas())
    cont += 1
    jogos -= 1
