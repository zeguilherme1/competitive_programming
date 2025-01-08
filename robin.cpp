#include <bits/stdc++.h>
using namespace std;

/* se ai <= k ele pega o dinheiro

se ai = 0 ele dá 1 de dinheiro se ele tiver
*/
int main(){
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector<int> valores(n);
		for(int i = 0; i < n; i++){
			cin >> valores[i];
		}
		int counter = 0;
		int carteira = 0;
		for(int i  = 0; i < n; i++){
			if(valores[i] >= k){
				carteira += valores[i];
			}
			else if(valores[i] == 0 && carteira > 0){
				carteira--;
				counter++;
			}
		}
	cout << counter << endl;
	}

	return 0;
}
