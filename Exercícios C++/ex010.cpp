#include<iostream>

/*10) Construa um programa em C++  que imprima qual o menor e qual o maior valor de dois números A e B, lidos através do teclado.*/
using namespace std;

int main (){
	int a, b;
	
	cout << "Digite um numero:";
	cin >> a;
	cout << "Digite outro numero:";
	cin >> b;
	
	if(a > b){
		cout << a <<" e maior que "<< b;
	}else{
		cout << b <<" e maior que "<< b;
	}
	
	return 0;
}
