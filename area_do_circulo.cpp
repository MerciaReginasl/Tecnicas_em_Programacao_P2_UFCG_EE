#include <iostream>
#define PI 3.1415
/*Calcular área do Circulo*/
using namespace std;

int main() {
  float raio, area_do_circulo;
  cout<<"Informe o raio do circulo: "; //python print
  cin >> raio; //python input
  area_do_circulo = PI * raio * raio; //Operação aritmética
  cout << "A área do circulo é: " << area_do_circulo << "m²" << endl;
  return 0; //O programa executou com sucesso!
  
}

/* Alt Gr + 2 = m² */ 
