#include <iostream>
#include <stack>

using namespace std;

// se eu ler uma `)` sem ter um `(` erro 
// se sobrar `(` ao final da string sem ter um `)`

int main() {

  string expressao;
  while(cin >> expressao) { // EOF => End of File 
    bool deuErro = false;
    stack<char> filaDeCaracteres;
    for(auto caractere : expressao) {

      if(caractere != '(' && caractere != ')') continue; 

      if(caractere == '(') {
        filaDeCaracteres.push('(');
        continue;
      };

      if(filaDeCaracteres.empty()) {
        deuErro = true;
        break;
      } else {
        filaDeCaracteres.pop(); 
      }
    } 

    if(deuErro || !filaDeCaracteres.empty()) {
      cout << "incorrect" << endl;
    } else {
      cout << "correct" << endl; 
    }
  }

  return 0;
}