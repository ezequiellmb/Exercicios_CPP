#include<iostream>

/*9) Escreva um programa em C++  para determinar se um n�mero A � divis�vel por um outro n�mero B. Esses valores devem ser fornecidos pelo usu�rio.*/
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
