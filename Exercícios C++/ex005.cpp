#include<iostream>

/*5) Construir um programa em C++ que leia dois números e efetue a adição. Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8; caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.*/
using namespace std;

int main (){
	int num, num2, total;
	
	cout << "Digite um numero:";
	cin >> num;
	cout << "Digite outro numero:";
	cin >> num2;
	
	total = num + num2;
	
	if(total > 20){
		total += 8;
		cout << total;
	}else{
		total -= 5;
		cout << total;
	}
	
	return 0;
}
