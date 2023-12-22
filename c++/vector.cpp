#include <iostream>
#include <vector>


using namespace std;

int main() {
  int myArray[4] = {7, 8, 4, 6};


  for(int i=0; i<4; i++) {
    cout << "meu vetor na posicao " << i + 1 << " e igual a: " << myArray[i] << endl;
  }

  cout << myArray[3] << endl;


  vector<int> meuVector;

  meuVector.push_back(7);
  meuVector.push_back(8);
  meuVector.push_back(4);
  meuVector.push_back(6);


  for(int i=0; i<4; i++) {
    cout << "meu vetor na posicao " << i + 1 << " e igual a: " << meuVector[i] << endl;
  }


  meuVector.pop_back();

  for(auto valor: meuVector) {
    cout << "valor" << valor << endl;
  }

  return 0;
}

