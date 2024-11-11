#include <bits/stdc++.h>
using namespace std;


int main(){
	int array[3][3];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> array[i][j];
		}
	}
	int maior = array[0][0];

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(array[i][j] > maior){
				maior = array[i][j];
			}
		}
	}

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(array[i][j] == maior){
				array[i][j] = -1;
			}
		}
	}
	

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << array[i][j] << " ";
		}
	cout << endl;
	}
	return 0;

}
