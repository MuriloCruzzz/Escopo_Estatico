// C05EX17.CPP

#include <iostream>
using namespace std;

void incremento(void); //

int main(void)
{
  for(int I = 1; I <= 10; I++) // variavel locar no for
    incremento();
  cout << "\nTecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

void incremento(void)
{
  static int R = 1; // destroi o valor da area e incrementa 1
  cout << R << endl;
  R++;
}
