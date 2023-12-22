#include <iostream>
#include <vector>

using namespace std;

// orientacao a objetos
class Pessoa {
  public: 
    Pessoa(string qualquerCoisa, int idade) {
      this->nome = qualquerCoisa;
      this->idade = idade;
    }

    // metodos
    void mostrarInfomacoes() {
      cout << "Nome: " << nome << " Idade: " << idade << endl;
    }

    void atualizaIdade(int idade) {
      this->idade = idade;
    }

  // atributos
  private:
    string nome;
    int idade;
};

int main() {

  Pessoa pessoa1("Felipe merkles", 23);
  Pessoa pessoa2("igor maia", 23);
  Pessoa pessoa3("luidi paulo", 23);
  Pessoa pessoa4("yandri paulo", 23);
  Pessoa pessoa5("milena paula", 23);

  vector<Pessoa> people;  

  people.push_back(pessoa1);
  people.push_back(pessoa2);
  people.push_back(pessoa3);
  people.push_back(pessoa4);
  people.push_back(pessoa5);

  for(Pessoa pessoa: people) {
    pessoa.mostrarInfomacoes();
  }
}

