#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		
		size_t 	posAB = s.find("AB");
		size_t	posBA = s.find("BA");

	if ((posAB != string::npos && (posAB == 0 || (s[posAB - 1] != 'A' && s[posAB - 1] != 'B'))) ||
        (posBA != string::npos && (posBA == 0 || (s[posBA - 1] != 'A' && s[posBA - 1] != 'B')))) {
		cout << "YES" << endl;
}
	else{
		cout << "NO" << endl;
	}
}
	
	return 0;
}
