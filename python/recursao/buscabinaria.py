import random

def busca_binaria(lista, item, menor, maior):
  if(len(lista) == 1):
    if(lista[0] == item):
      return item
    else:
      return None
  
  meio = (menor + maior) // 2
  valorMeio = lista[meio]

  if valorMeio == item:
    return item
  if(valorMeio > item):
    maior = meio - 1
    return busca_binaria(lista, item, menor, maior)
  else:
    menor = meio + 1 
    return busca_binaria(lista, item, menor, maior)


lista = sorted([random.randint(1, 100) for _ in range(10)])
item = random.choice(lista)

print('lista', lista)
print('item', item)
print('índice do item', busca_binaria(lista, item, 0, len(lista) - 1))

