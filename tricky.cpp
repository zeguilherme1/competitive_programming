#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		
		ll sum = (n * (n+1)) / 2;
		
		ll potencia  = 1;
		while(potencia <= n){
			sum -= 2 * potencia;
			potencia *= 2;
		}
		cout << sum << endl;
	}
	return 0;
}
