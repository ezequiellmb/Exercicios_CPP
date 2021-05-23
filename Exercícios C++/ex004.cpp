#include<iostream>

/*4) Escreva um programa em C++ para determinar se um dado número N (recebido através do teclado) é POSITIVO, NEGATIVO ou NULO*/
using namespace std;

int main (){
	int num;
	
	cout << "Digite um numero:";
	cin >> num;
	
	if(num > 0){
		cout << num << " POSITIVO";
	}else if(num < 0){
		cout << num << " NEGATIVO";
	}else{
		cout << num << " NULO";
	}
	
	return 0;
}
