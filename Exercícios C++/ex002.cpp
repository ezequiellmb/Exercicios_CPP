#include<iostream>

/*2) Construa um programa em C++ que leia dois valores numéricos inteiros e efetue a adição; caso o resultado seja maior que 10, apresentá-lo.*/
using namespace std;

int main (){
	int num, num2, total;
	
	cout << "Digite um numero:";
	cin >> num;
	
	cout << "Digite outro numero:";
	cin >> num2;
	
	total = num + num2;
	
	if(total > 10){
		cout << "Soma e igual a: "<< total;
	}else{
		cout << "Soma dos valores menor que 10";
	}
	
	
	return 0;
}
