#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Pessoa {
  string nome;
  int idade;
};

int main() {

  Pessoa pessoa1;

  pessoa1.nome = "Felipe Merkles";
  pessoa1.idade = 23;

  cout << "nome: " << pessoa1.nome << endl;
  cout << "idade: " << pessoa1.idade << endl;

  return 0;
}

