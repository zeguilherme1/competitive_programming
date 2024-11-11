#include <bits/stdc++.h>
using namespace std;

int main(){
	int matriz[3][3];
	int soma_magica = 0;
	bool magico = true;

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> matriz[i][j];
		}		
	}
	for(int j = 0; j < 3; j++){
		soma_magica += matriz[0][j];
	}
	
	for(int i = 1; i < 3; i++){
		int soma_linha = 0;
		for(int j = 0; j < 3; j++){
			soma_linha += matriz[i][j];	
		}
		if(soma_linha != soma_magica){
			magico = false;
			break;
		}
	}

	for(int i = 0; i < 3 && magico; i++){
		int soma_coluna = 0;
		for(int j = 0; j < 3; j++){
			soma_coluna += matriz[i][j];
		}
		if(soma_coluna != soma_magica){
			magico = false;
			break;
		}
	}



	int soma_diag1 = matriz[0][0] + matriz[1][1] + matriz[2][2];
	int soma_diag2 = matriz[0][2] + matriz[1][1] + matriz[2][0];

	if(soma_diag1 != soma_magica || soma_diag2 != soma_magica){
		magico = false;
	}
	if(magico){
		cout << "SIM";
	}else{
		cout << "NÃO";
	}

	return 0;


}
