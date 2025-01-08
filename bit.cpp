#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	int counter = 0;
	while(t--){
		string s;
		cin >> s;
		if(s == "++X" || s =="X++"){
			counter++;
		}
		if(s == "--X" || s == "X--"){
			counter--;
		}
	}
	cout << counter << endl;
	return 0;
}
