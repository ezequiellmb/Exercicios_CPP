#include <iostream>
#include <math.h>

/*6) Escreva um programa em C++  que leia um n�mero e imprima a raiz quadrada do n�mero caso ele seja positivo ou igual a zero e o quadrado do n�mero caso ele seja negativo. */
using namespace std;

int main (){

	int num, raiz, quad;
	
	cout << "Digite um numero:";
	cin >> num;
		
		if(num >= 0){
			raiz = sqrt(num);	
			cout <<  raiz << " e a raiz quadrada de " << num;
		}else{
			quad = num * num ;
			cout << quad << " e o quadrado do numero " << num;	
		}
		return 0;
}
