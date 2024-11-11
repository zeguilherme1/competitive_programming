#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin >> n;

	vector<float> array(n);
	for (int i = 0; i < n; i++){
		cin >> array[i];
	}

	for(int k = 0; k < n; k++){
		cout << fixed << setprecision(4) << sqrt(array[k]) << endl;
	} 
	
	return 0;
}
