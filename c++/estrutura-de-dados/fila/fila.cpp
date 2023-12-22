#include <iostream>
#include <vector>

using namespace std;

class Fila
{
private:
  vector<int> elementos;

public:
  bool vazia()
  {
    return elementos.empty();
  }

  void enfileirar(int numero)
  { // push
    elementos.push_back(numero);
  }

  void desinfileirar()
  {
    if (vazia())
    {
      cout << "A fila esta vazia" << endl;
      return;
    }
    elementos.erase(elementos.begin()); // pop
  }

  int frenteDaFila()
  {
    if (vazia())
    {
      cout << "A fila esta vazia" << endl;
      return -1;
    }

    return elementos.front();
  }
};

int main()
{
  Fila fila;

  fila.enfileirar(3);
  fila.enfileirar(2);
  fila.enfileirar(1);

  cout << "Elemento da frente: " << fila.frenteDaFila() << endl;

  fila.desinfileirar();

  cout << "Elemento da frente apos desenfileirar: " << fila.frenteDaFila() << endl;

  fila.desinfileirar();

  cout << "Elemento da frente apos desenfileirar: " << fila.frenteDaFila() << endl;

}