#include <bits/stdc++.h>
using namespace std;

void solve(){
	string c = "codeforces";
	string s;
	cin >> s;
	int counter = 0;
	for(size_t i = 0; i < c.length(); i++){
		if(s[i] != c[i]){
			counter++;
		}
	}
	cout << counter << endl;

}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
