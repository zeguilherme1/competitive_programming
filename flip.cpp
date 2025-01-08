#include <bits/stdc++.h>
using namespace std;

int main(){	
	ios::sync_with_stdio(false);

	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> array(n);
		
		for(int i = 0; i < n; i++){
			cin >> array[i];
		}
		if(n < 4){
			array[0] = (array[0] * -1);
			array[1] = (array[1] * -1);
		}
		for(int i = 0; i < n; i++){
			if(array[i] == -1 && array[i+1] == -1){
				array[i] = (array[i]*-1);
				array[i+1] = (array[i+1]*-1);
			}
		}
		int soma = 0;
		for(int i = 0; i < n; i++){
			soma += array[i];
		}
		cout << soma << "\n";
		
	}
	return 0;
}

