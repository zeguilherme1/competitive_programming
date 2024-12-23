#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		
		int maxSum = 0;
		int bestX = 2;
		for(int x = 2; x <= n; x++){
			int sum = 0;
			for(int k = 1; k * x <= n; k++){
				sum += k * x;
			}
			if(sum > maxSum){
				maxSum = sum;
				bestX = x;
			
			}
		}
		cout << bestX << endl;
	}
	
	return 0;
}
