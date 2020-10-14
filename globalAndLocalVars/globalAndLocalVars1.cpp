#include <iostream>

using namespace std;
int a;
int input;
void Printing() {
  cout<<a<<"\n"; //prints 100

  int a = 5;
  cout<<a<<"\n"; //prints 5
}

void PrintingVar (int input) {
  cout<<input<<"\n"; // prints 100
}

int main() {
  a = 100;

  Printing();

  PrintingVar(a);

  int a = 200;

  cout<<a<<"\n"; // prints 200

  cout<<input<<"\n"; // prints 0

  return 0;
}

