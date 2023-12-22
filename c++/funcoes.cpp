#include <iostream>

using namespace std;

int soma(int a, int b) {
  int soma = a +  b;
  int multiplica = soma * 2;
  int multiplicaDois = soma * 90;
  return soma + multiplica + multiplicaDois;
} 

int main() {
  int a = 10;
  int b = 11;


  cout << "A soma de " <<  a << " + " << b << " = " << soma(a, b) << endl; 
  cout << "A soma de " <<  a << " + " << b << " = " << soma(a, b) << endl; 

  return 0;
}