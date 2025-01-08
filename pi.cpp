#include <bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		string pi = "314159265358979323846264338327";
		string s;
		cin >> s;
		
		if(s.size() == 1 && s[0] == '3'){
			cout << "1\n";
			continue;
		}
		else if(s[0] != '3'){
			cout << "0\n";
			continue;
		}
		int counter  = 0;
		for(size_t i = 0; i < s.size(); i++){
			if(s[i] == pi[i]){
				counter++;
			}else if(s[i] != pi[i]){
				break;
			}
		}
		cout << counter << "\n";
	}

	return 0;
}
