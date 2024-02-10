def regressivo(i):
  print(i)
  if(i <= 1): ## caso base
    return
  else: ## caso recursivo
    regressivo(i-1)


regressivo(100)