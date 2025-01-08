#include <bits/stdc++.h>
using namespace std;
/* inicializa duas variaveis, caso o indice == 0, incrementa e tira o maximo entre a variavel que contabiliza a atual e a com os zeros */


void solve(){
	int n;
	cin >> n;
	vector<int> array(n);
	for(int i = 0; i < n; i++){
		cin >> array[i];
	}
	int max_zero = 0, atual = 0;
	
	for(int i = 0; i < n; i++){
		if(array[i] == 0){
			atual++;
			max_zero = max(atual, max_zero);
		}else{
			atual = 0;
		}
	}
	cout << max_zero << endl;
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
