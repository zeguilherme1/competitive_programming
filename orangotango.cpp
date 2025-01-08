#include <bits/stdc++.h>
using namespace std;
/*	se o score é dado por c - b então sort reverse C e sort B pra fazer c - b ajude
	
	max - min * len(-1) ?

	7 - 5 * (3-1)
	2 * 2 == 4 ok

	2 - 1 * (5 - 1)
	1 * 4 == 4 ok
	
	69 - 69 * n == 0;

	ok
	
*/


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int b = *max_element(a.begin(), a.end());
		int c = *min_element(a.begin(), a.end());
		
		int resultado = (b - c) * (n - 1);
		cout << resultado << endl;
		
	}

	return 0;
}
