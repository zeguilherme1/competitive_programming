#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	
	vector<int> array(n);
	for(int i = 0; i < n; i++){
		cin >> array[i];
	}
	sort(array.rbegin(), array.rend());
	
	int sum = 0;
	int counter = 0;
	for(int j = 0; j < n; j++){
		sum += array[j];
		counter++;
		if(sum >= m){
			break;
		}
	}

	cout << counter << endl;
	return 0;
}

