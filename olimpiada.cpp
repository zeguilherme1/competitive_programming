#include <bits/stdc++.h>
using namespace std;

/*
	monocarp resolve a problemas
	stereocarp resolve b problemas
	
	se monocarp treinou no dia I, stereocarp vai treinar sempre no dia i+1
	(dia seguinte)
	
	a diferença entre o numero de problemas do mono e do stereo tem que ser a maior possivel

	
	maximizar (m - s) onde m eh o numero de problemas e S o numero que o stereocarp resolve

	

*/

void solve(){
		int n;
		cin >> n;
		vector<int> a(n);
		vector<int> b(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			cin >> b[i];
		}
		long long ans = a[n - 1];
		
		for(int i = 1; i < n; i++){
			if(a[i - 1] > b[i]){
				ans += (a[i - 1] - b[i]);
			}
		}
		cout << ans << endl;

}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t = 1;
	cin >> t;
	while (t--){
		solve();
	}
		return 0;

}
