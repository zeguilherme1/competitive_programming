#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int n;
		string note;
		cin >> n;
		vector<string> notes;
		for (int j = 0; j < n; j++){
			cin >> note;
			notes.push_back(note);
		}
		reverse(notes.begin(), notes.end());	
		for(int  j = 0; j < n; j++){
			int notepos = notes[j].find('#');
			cout << notepos + 1 << " ";	
		}
	cout << "\n";
	}
	return 0;
}
