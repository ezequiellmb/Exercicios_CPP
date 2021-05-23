#include<iostream>

/*8) Escreva um programa em C++ que leia um número e informe se ele é ou não divisível por 5. */
using namespace std;

int main (){
	int num;
	
	cout << "Digite um numero:";
	cin >> num;
	
	if(num % 5 == 0){
		cout << "e divisivel por 5";
	}else{
		cout << "nao e divisivel por 5";
	}
	
	return 0;
}
