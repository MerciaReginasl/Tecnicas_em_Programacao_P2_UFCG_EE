#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Cria um vetor para armazenar os preços
  vector<float> precos;
  // Adiciona alguns preços iniciais
  precos.push_back(10.50);
  precos.push_back(25.00);
  precos.push_back(18.75);
  
  // Imprime os preços atuais
  cout << "Preços atuais:" << endl;
  for (float preco : precos) {
    cout << preco << " ";
    
  }
  
  cout << endl;
  // Adiciona mais dois preços
  precos.push_back(32.99);
  precos.push_back(15.25);
  // Imprime os preços atualizados
  cout << "Preços atualizados:" << endl;
  for (float preco : precos) {
    cout << preco << " ";
    
  }
  
  cout << endl;
  
  return 0;
}

# +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <vector>
int main(){
vector <int> vetor;
vetor.assign(10,0); //cria dinamicamente um vetor de 10 posições
for (int i=0; i<vetor.size();i++)
vetor[i]=i;
cout<<"TAM = "<<vetor.size()<<endl;
vetor[0]=vetor[9]*2;
vetor.push_back(20);
for (int i=0; i<vetor.size();i++)
cout<<vetor.at(i)<<" ";
cout<<endl; }

  
