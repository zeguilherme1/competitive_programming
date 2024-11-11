#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;


	vector <vector<int>> tabuleiro;
	tabuleiro.resize(n, vector<int>(n));

	int max_peso = 0;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> tabuleiro[i][j];
		}
	}
	
	for(int i = 0;	i < n; i++){
		for(int j = 0; j < n; j++){
			int peso = 0;
			for(int k = 0; k < n; k++){
				if(k != j){
					peso += tabuleiro[i][k];
				}
				if(k != i){
					peso += tabuleiro[k][j];
				}
				if(peso > max_peso){
					max_peso = peso;		
				}
			}
		}
	}



	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << tabuleiro[i][j] << " ";


		}
		cout << endl;
	
	}
	cout << max_peso << "\n" << endl;

	return 0;
}
