#include <bits/stdc++.h>
using namespace std;
#include <vector>


int main(){
	int n;
	cin >> n;
	vector<int> array(n);
	
	for(int i = 0; i < n; i++){
		cin >> array[i];
	}
	cout << "O array inserido é: ";
	for(int i = 0; i < n; i++){
		cout  << array[i] << " ";
	}
	cout << "\n";
	cout << "O array ordenado é: ";
	for(int i = 0; i < n; i++){
		for (int k = 0; k < n - 1; k++){
			if(array[k] > array[k+1]){
				swap(array[k], array[k+1]);
			}
		}
	cout << array[i] << " ";
	}
	cout << "\n";
	return 0;
}
