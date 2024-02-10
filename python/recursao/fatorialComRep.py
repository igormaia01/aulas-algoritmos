def fatorial(n):
  fat = n;
  while(n != 1):
    n = n -1
    fat *= n
  return fat

print(fatorial(5))