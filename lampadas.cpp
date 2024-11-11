#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	bool l1 = false;
	bool l2 = false;
	cin >> n;

	vector<int> array(n);

	for(int i =0; i < n; i++){
		cin >> array[i];
	}

	for(int k = 0; k < n; k++){
		if(array[k] == 1){
			l1 = !l1;
		}
		if(array[k] == 2){
			l1 = !l1;
			l2 = !l2;
		}
	}

	if(l1){
		cout << "1" << endl;
	}else{
		cout << "0" << endl;
	}

	if (l2){
		cout << "1" << endl;
	}else{
		cout << "0" << endl;
	}
	return 0;

}
