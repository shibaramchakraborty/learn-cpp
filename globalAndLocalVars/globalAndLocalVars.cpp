#include <iostream>

using namespace std;

int Aglobal[3]; // all initialized to 0 for global
int a;

void Printing ()
{
  cout<<a;
}

int main() {
  int Alocal[3]; // initialized to garbage values for local
  
  cout << "Aglobal is:"<<" "<<Aglobal[0]<<" "<<Aglobal[1]<<" "<<Aglobal[2]<<"\n";

  cout << "Alocal is:"<<" "<<Alocal[0]<<" "<<Alocal[1]<<" "<<Alocal[2]<<"\n";

  a = 5;
  Printing();

  return 0;
}