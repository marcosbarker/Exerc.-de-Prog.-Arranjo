#include <iostream>
#include <iomanip> //uso do setw
using namespace std;

int main(){
int empresa[6][5]=
  {8, 0, 1, 2, 4,
   7, 2, 3, 2, 4,
   1, 8, 4, 7, 0,
   3, 4, 0, 1, 0,
   5, 5, 4, 2, 5,
   0, 8, 5, 0, 1};

    cout << "\n\t    ";
 for(int i = 1;i < 5;i++){
    cout << i << "    ";
}

 for (int l = 0;l < 5;l++){
 for (int c = 0;c < 4;c++){
     empresa[5][c] =  (empresa[5][c]+empresa[l][c]);
     empresa[l][4] =  empresa[l][4]+empresa[l][c];
  }
}
    cout << "\n\t    --   --   --   --\n";
 for (int c=1;c<7;c++){
 if (c == 6){
    cout << "\t   ";
 }else{
    cout << "\t" << c << " |";
 }
 for (int l=0;l<5;l++){
     empresa[5][4] = 0;
     cout << setw(2) << empresa[c-1][l] << ( (l!=5-1) ? " - " : ""); // setw tem a função de ajustar a largura do próximo dado a ser enviado 
   }                                                                 //operador condicional ternario, tirar o simbolo separador apos o ultimo numero   
     cout << "\n";
  }   
}
