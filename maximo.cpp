#include <bits/stdc++.h>
using namespace std;
/*
	dado um array

 	[2, 3, 1, 1, 2, 3]
	podemos colorir qualquer indice I que nao sejam adjacentes entre si(?)
	i.e
	[2, n, 1, n, 2, n]
	toma o valor maximo, nesse caso 2
	e soma com o tamanho do array formado pelos valores coloridos, nesse caso 3
  	cout << 5 << endl;

	


*/
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		vector<int> array(n);
		for(int i = 0; i < n; i++){
			cin >> array[i];
		}

	}
	return 0;
}
