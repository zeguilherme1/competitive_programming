#include <bits/stdc++.h>
using namespace std;
int main(){
	string dna;
	cin >> dna;

	int maxima = 1;
	int atual = 1;

	for(size_t i = 1; i < dna.size(); i++){
		if(dna[i] == dna[i -1]){
			atual++;
		}else{
			maxima = max(maxima, atual);
			atual = 1;
		}

	}
	maxima = max(maxima, atual);
	cout << maxima << endl;
	return 0;
}
