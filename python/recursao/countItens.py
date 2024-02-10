def count_itens(lista):
  if lista == []:
    return 0
  lista.pop()
  return 1 + count_itens(lista)

print(count_itens([1,2,3,4,5,6,7,8]))

