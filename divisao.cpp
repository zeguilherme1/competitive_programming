#include <bits/stdc++.h>
using namespace std;
#define ll long long

/* 	a = 10
	b = 4
	
	proximo divisor ==  12
	a % b == 2

	a + (b - (a%b))?
	10 + (4 - (2))
	proximo divisor ok
	
	
	
	a = 13
	b = 9
	13 + (9 - 4)
		5
	18 == proximo divisor ok

	formula == b - (a%b)?
	
	*/
void solve(){
	ll movimentos = 0;
	ll a, b;
	cin >> a >> b;
	if((a%b) == 0){
		cout << 0 << endl;
	}else{
		cout << b - (a % b) << endl;
	}
}

		
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
