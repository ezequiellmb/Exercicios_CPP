#include<iostream>

/*1 ) Escreva um programa em C++ que leia um número e o imprima caso ele seja
maior que 20. */
using namespace std;

int main (){
	int num;
	
	cout << "Digite um numero:";
	cin >> num;
	
	if(num > 20){
		cout << "Maior que 20\n";
	}else{
		cout << "Numero menor que 20";
	}
	
	
	return 0;
}
