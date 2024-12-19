#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		unordered_map<int, int> map;
		for(int i = 0; i < n; i++){
			int temp;
			cin >> temp;
			map[temp]++;
		}
		int score = 0;	
		for(auto i : map){
			score += i.second / 2;
		}
	cout << score << endl;
	}
	return 0;
}
