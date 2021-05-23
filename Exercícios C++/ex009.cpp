#include<iostream>

/*9) Escreva um programa em C++  para determinar se um número A é divisível por um outro número B. Esses valores devem ser fornecidos pelo usuário.*/
using namespace std;

int main (){
	int a, b;
	
	cout << "Digite um numero:";
	cin >> a;
	cout << "Digite outro numero:";
	cin >> b;
	
	if(a % b == 0){
		cout << a <<" e divisivel por "<< b;
	}else{
		cout << a <<" nao e divisivel por "<< b;
	}
	
	return 0;
}
