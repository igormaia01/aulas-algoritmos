#include <iostream>
#include <vector>

using namespace std;

class Pilha
{
  private:
    vector<int> elementos;

  public:
    bool vazia() {
      return elementos.empty();
    }

  void empilhar(int numero){
    elementos.push_back(numero);
  }

  void desempilhar() {
    if(vazia()) {
      cout << "A Pilha esta vazia" << endl;
      return;
    }
    elementos.pop_back();
  }

  int topoDaPilha() {
    if(vazia()) {
      cout << "A Pilha esta vazia" << endl;
      return 0;
    }
    return elementos.back();
  }
};

int main() {

  Pilha pilha;

  pilha.empilhar(1);
  pilha.empilhar(2);
  pilha.empilhar(3);

  cout << "Topo da pilha: " << pilha.topoDaPilha() << endl;
  pilha.desempilhar();
  cout << "Topo da pilha: " << pilha.topoDaPilha() << endl;
  pilha.desempilhar();
  cout << "Topo da pilha: " << pilha.topoDaPilha() << endl;
  pilha.desempilhar();
  cout << "Topo da pilha: " << pilha.topoDaPilha() << endl;


  return 0;
}