#include <bits/stdc++.h>
using namespace std;
#define matrix vector<vector<int>>

int n;
bool verificar(matrix const &matriz){
	for(int i = 0; i + 1 < n; i++){
		for(int j = 0; j + 1 < n; j++){
			if(matriz[i][j] >= matriz[i+1][j] || matriz[i][j] >= matriz[i][j+1]){
			return false;
			}
		}
	}

	return true;
}


void rotacionar(matrix &matriz){
	matrix aux;
	aux.resize(n);
	for(int i = 0; i < n; i++){
		aux[i].resize(n);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			aux[n - j - 1][i] = matriz[i][j];
		}
	}
	matriz = aux;
}
int main(){
	matrix matriz;
	cin >> n;
	matriz.resize(n);
	for(int i = 0; i < n; i++){
		matriz[i].resize(n);
		for(int j = 0; j < n; j++){
			cin >> matriz[i][j];	
		}
	}
	int resp = 0;

	while(!verificar(matriz)){
		rotacionar(matriz);
		resp++;
	}

	cout << resp << '\n';
	return 0;
}
