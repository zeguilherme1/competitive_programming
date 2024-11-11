#include <bits/stdc++.h>
using namespace std;
#include <vector>

int main(){
	long long n;
	long long count = 0;
	cin >> n;
	vector<long long> vetor(n);
	

	for(int i = 0; i < n; i++){
	cin >> vetor[i];
	}

	for(int i = 1; i < n; i++){
		if(vetor [i] < vetor[i - 1]){
			count += (vetor[i - 1] - vetor[i]);
			vetor[i] = vetor[i - 1];
		}	

	}
	cout << count << endl;
	return 0;
}
