#include<iostream>

/*11)Escreva um programa em C++  que leia um número e informe se ele é divisível por 3 e por 7.*/
using namespace std;

int main (){
	int num;
	
	cout << "Digite um numero:";
	cin >> num;
	
	if(num % 3 == 0 && num % 7 == 0){
		cout << num << " e divisivel por 3 e 7";
	}else{
		cout << num <<" nao e divisivel por 3 e 7";
	}
	
	return 0;
}
