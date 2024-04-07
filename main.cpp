#include <iostream>
using namespace std;
void ler_matriz(int matriz[3][3]){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      matriz[i][j]=1;
    }
  }
}
void imprimir_linha(int matriz[3][3], int linha){
  for(int i = 0; i < 3; i++){
    cout<<matriz[linha][i]<<" ";
  }
}
void imprimir_coluna(int matriz[3][3], int coluna){
  for(int i = 0; i < 3; i++){
    cout<<matriz[i][coluna]<<" ";
  }
}
int main(){
  int matriz[3][3];
  ler_matriz(matriz);
  int linha, coluna;
  cout<<"digite a linha e a coluna que deseja imprimir ";
  cin>>linha>>coluna;
}