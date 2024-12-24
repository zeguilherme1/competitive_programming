#include <bits/stdc++.h>
using namespace std;

int main(){

	// x*(b**a) == y, formula do problema
	int t;
	cin >> t;
	while(t--){
		int x;
		int y;
		cin >> x >> y;
		int a, b;
		bool verifica = false;
		for(int a = 1; a <= 10; a++){
			for(int b = 1; b <= 10; b++){
				int resultado = pow(a, b);
				if((x*resultado) == y){
					cout << b << " " << a << endl;
					verifica = true;
					break;
				}
			}
		
		}
		if(!verifica){
			cout << 0 << " " << 0 << endl;
		}
	}

	return 0;
}		
