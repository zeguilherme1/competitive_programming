#include <bits/stdc++.h>
using namespace std;
// tentar começar a codar igual o asiatico do mit, coloca a solucao numa void e chama ela na main dps, talvez fique melhor estruturado

void solve(){
	string s;
	cin >> s;
	for(int i = 1; i < (int)s.size(); i++){
		if(s[i] != s[i-1]){
			swap(s[i], s[i-1]);
			cout << "YES\n" << s << endl;
			return ;
		}
	}
	cout << "NO" << endl;

}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
