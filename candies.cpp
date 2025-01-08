#include <bits/stdc++.h>
using namespace std;

/* | (valor + minimo) - valor | 


1 2 4 1 6 8 12 4
38

	1 2 3 4 5
		1 2 3 4

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
		sort(array.begin(), array.end());
		int menor = array[0];
		int resposta = 0;
		for(int i = 0; i < n; i++){
			resposta += (array[i] - menor);
		}			
		cout << resposta << "\n";
	}

	return 0;
}
