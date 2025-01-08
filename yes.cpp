#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin >> s;
	std::transform(s.begin(), s.end(), s.begin(), ::tolower);
	
	if(s == "yes"){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

}

int main(){
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		solve();
	}

	return 0;
}
