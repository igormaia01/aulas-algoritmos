def maior_da_lista(lista):
  if len(lista) == 1:
    return lista[0]
  else:
    return max(lista[0], maior_da_lista(lista[1:]))

print(maior_da_lista([1,6,8,3,10,2,15]))


