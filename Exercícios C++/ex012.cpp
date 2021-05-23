#include<iostream>

/*12) Construa um programa em C++  que dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor.*/
using namespace std;

int main (){

	int a, b, c, d;
	int maior, menor;
	    
		cout << "A: ";
		cin >> a;
		cout << "B: ";
		cin >> b;
		cout << "C: ";
		cin >> c;
		cout << "D: ";
		cin >> d;
		
		if(a >= b && a >= c && a >= d){
		    maior = a;
		}else if(b >= a && b >= c && b >= d){
		    maior = b;
		}else if(c >= a && c >= d && c >= b){
		    maior = c;
		}else{
		    maior = d;
		}
		
		if(a <= b && a <= c && a <= d){
		    menor = a;
		}else if(b <= a && b <= c && b <= d){
		    menor = b;
		}else if(c <= a && c <= d && c <= b){
		    menor = c;
		}else{
		    menor = d;
		}
		
		cout << "menor " << menor;
		cout << "\nmaior " << maior;
		
		return 0;
}
