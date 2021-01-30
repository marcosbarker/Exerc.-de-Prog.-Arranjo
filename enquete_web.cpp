#include <iostream>
#include <iomanip> //uso do setw
#include <locale>
using namespace std;

int main(){
int l = 5;
int n;
float media = 0.0;

setlocale(LC_ALL, ""); 
string resposta1, resposta2;
string topicos[5] = 
{"Habitação",
 "Sistema Único de Saúde",
 "Educação Pública",
 "Meio Ambiente",
 "Combate as Drogas",};

int tabela[5][11] = 
{0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0};

int menoresposta [5];
int menorresposta;

for(int i = 0;i<2;i++){ // 2 == numero de vezes do questionario
cout << "\n\t\t      Enquete Consciência Social\n"
     << "\tVote com 1 (a menos importatante) a 10 (a mais importatante)\n"
	 << "     <><><><><>><><><><><><><><><><><><><><><><><><><><><><><><><>\n"; 
     
for (int resposta = 0; resposta < 5; resposta++){
cout << topicos[resposta] << ": ";
cin >> n;

if (n == 1){
	tabela[resposta][0] = tabela[resposta][0]+1;
	tabela[resposta][10] = (tabela[resposta][10]+1);
}
if (n == 2){
	tabela[resposta][1] = tabela[resposta][1]+1;
	tabela[resposta][10] = (tabela[resposta][10]+2);
}
if (n == 3){
	tabela[resposta][2] = tabela[resposta][2]+1;
	tabela[resposta][10] = (tabela[resposta][10]+3);
}
if (n == 4){
	tabela[resposta][3] = tabela[resposta][3]+1;
	tabela[resposta][10] = (tabela[resposta][10]+4);
}
if (n == 5){
	tabela[resposta][4] = tabela[resposta][4]+1;
	tabela[resposta][10] = (tabela[resposta][10]+5);
}
if (n == 6){
	tabela[resposta][5] = tabela[resposta][5]+1;
	tabela[resposta][10] = (tabela[resposta][10]+6);
}
if (n == 7){
	tabela[resposta][6] = tabela[resposta][6]+1;
	tabela[resposta][10] = (tabela[resposta][10]+7);
}
if (n == 8){
	tabela[resposta][7] = tabela[resposta][7]+1;
	tabela[resposta][10] = (tabela[resposta][10]+8);
}
if (n == 9){
	tabela[resposta][8] = tabela[resposta][8]+1;
	tabela[resposta][10] = (tabela[resposta][10]+9);
}
if (n == 10){
	tabela[resposta][9] = tabela[resposta][9]+1;
	tabela[resposta][10] = (tabela[resposta][10]+10);
 }
}
	cout << "\n\t\t\t " 
     << "1    2    3    4    5    6    7    8    9    10\n";

for (int c=0;c<5;c++){
	cout << setw(22) << topicos[c] << ":\t"; //setw tem a função de ajustar a largura do próximo dado a ser enviado

for (int l=0;l<10;l++){
	cout << setw(2) << tabela[c][l] << ( (l!=10-1) ? " - " : ""); //setw tem a função de ajustar a largura do próximo dado a ser enviado
  }
	cout << "\n";
 }
}
	cout << "\n  Média:" << endl
	     << "\n";

for (int i = 0; i < 5;i++){
	media = tabela[i][10]/10.0;
	cout << topicos[i] << ": " << media << "\n";
	menorresposta = tabela[0][0];
if (tabela[i][10]> menorresposta){
	menorresposta = tabela[i][10];
	resposta1 = topicos[i];
  }
 }
	cout << "\nMenor resposta " << resposta1 <<" "<< menorresposta << "\n";
}