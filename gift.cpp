/* 	n  = numero de livros
	m = genero dos livros
	
	4 3
	2 1 3 1

	out: 5

	fatorial de m - fatorial da qtd repetida?

	3! - 1!
	6 - 1
	
	7 4
	4 2 3 1 2 4 3
	qtd de repeticoes  = 3
	4! - 3! == 24 - 6 == 18 ok
*/
#include <bits/stdc++.h>
using namespace std;

int fatorial(int n){
	int resultado = 1;
	for(int i = 1; i <= n; i++){
		resultado *= i;
	}
	return resultado;
}

int main(){
	int n, m;
	cin >> n >> m;
	
	vector<int> array(n);
	for(int i = 0; i < n; i++){
		cin >> array[i];
	}

	sort(array.begin(), array.end());
	int counter = 0;
	for(int j = 0; j < n - 1; j++){
		if(array[j] == array[j + 1]){
			counter++;
		}
	}

	int mfatorial = fatorial(m);
	int counterfatorial = fatorial(counter);
	
	cout << mfatorial - counterfatorial << endl;
	return 0;
}
	
