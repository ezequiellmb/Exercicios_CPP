#include<iostream>

/*7) Escreva um programa em C++  que receba um n�mero e imprima uma das mensagens: �� m�ltiplo de 3� ou �n�o � m�ltiplo de 3�.*/
using namespace std;

int main (){
	int num;
	
	cout << "Digite um numero:";
	cin >> num;
	
	if(num % 3 == 0){
		cout << "e multiplo de 3";
	}else{
		cout << "nao e multiplo de 3";
	}
	
	return 0;
}
