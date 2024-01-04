def busca_binaria(lista, item):
  menor = 0;
  maior = len(lista) - 1;

  while(menor <= maior):
    meio = (menor + maior) // 2
    valorMeio = lista[meio]

    if valorMeio == item:
      return item
    if valorMeio > item:
      maior = meio - 1
    else:
      menor = meio + 1
  
  return None

lista = [1, 5, 7,9]

print(busca_binaria(lista, 3))
print(busca_binaria(lista, 9))