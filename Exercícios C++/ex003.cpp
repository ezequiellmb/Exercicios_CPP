#include<iostream>

/*3) Construa um programa em C++ que determine (imprima) se um dado número N inteiro (recebido através do teclado) é PAR ou ÍMPAR. */
using namespace std;

int main (){
	int num;
	
	cout << "Digite um numero:";
	cin >> num;
	
	if(num % 2 == 0){
		cout << num << " PAR";
	}else{
		cout << num << " IMPAR";
	}
	
	return 0;
}
