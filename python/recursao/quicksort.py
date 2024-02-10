def quicksort(array):
  if len(array) < 2: ## caso base
    return array
  else:
    pivo = array[0] ## escolhendo o pivo
    menores = [i for i in array[1:] if i<= pivo] ## separando menores que o pivo
    maiores = [i for i in array[1:] if i > pivo] ## separando maiores que o pivo
    return quicksort(menores) + [pivo] + quicksort(maiores) ## quebrando em array menores caso até que chegue no caso base
  


desordenado = [10, 53, 123, 432, 675, 1, 5, 8, 3, 90, 2, 5, 9, 2312, 6765, 12321]
print('Este é um teste do algoritmo quicksort: ', desordenado)
print('resultado ordenado: ', quicksort(desordenado))

