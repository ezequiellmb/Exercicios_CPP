#include <iostream>

using namespace std;

int main (){
	
	int n;
	int valor = 55;
	int controle = 10;

	cout <<"*****************************\n";
	cout <<"* DESCUBRA O NUMERO SECRETO *\n";
	cout <<"*****************************\n\n";

		do{
			cout << "Digite um numero:";
			cin >> n;
			if(n != valor && n < valor){
				cout <<"\nTente Novamente...\nO valor secreto e maior\n\n";
				controle --;
				cout <<"Voce ainda tem "<< controle <<" tentativas\n";
				cout <<"___________________________________________________\n\n";
			}
			else if(n != valor && n > valor){
				cout << "\nTente Novamente...\nO valor secreto e menor\n\n";
				controle --;
				cout <<"Voce ainda tem "<< controle <<" tentativas\n";
				cout <<"___________________________________________________\n\n";
			}
		}while(n != valor && controle > 0);
		
		if(valor == n){
		controle *= 10;
		cout <<"\nPARABENS!!!\nValor Secreto encontrado.";
		cout <<"\nSua pontuacao foi: "<< controle << " pts\n\n";
		}
		else{
			cout << "\nVoce Perdeu :(\n";
			cout << "O numero secreto e: " << valor;
		}
		system("pause");
		
		return 0;
}
