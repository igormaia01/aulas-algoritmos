#include <iostream>
#include <stack> // pilha
#include <queue> // fila

using namespace std;

int main()
{
  cout << "Inserindo elemento  1 2 3  respectivamente na pilha e na fila" << endl;
  stack<int> myStack;
  myStack.push(1);
  myStack.push(2);
  myStack.push(3);

  cout << "Pilha" << endl;
  while (!myStack.empty())
  {
    int topElement = myStack.top();
    cout << "Elemento: " << topElement << endl;

    myStack.pop();
  }

  queue<int> myQueue;

  myQueue.push(1);
  myQueue.push(2);
  myQueue.push(3);

  cout << "Fila" << endl;

  while (!myQueue.empty())
  {
    int frontElement = myQueue.front();
    cout << "Elemento: " << frontElement << endl;

    myQueue.pop();
  }


  return 0;
}