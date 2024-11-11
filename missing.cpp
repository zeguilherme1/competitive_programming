#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long
int main(){
	ll n;
	cin >> n;

	ll soma_total = n * (n+1) / 2;
	ll soma_presente = 0;


	for (int i = 0; i < n - 1; i++){
		ll num;
		cin >> num;
		soma_presente += num;
	}

	cout << (soma_total - soma_presente) << endl;
	return 0;
}

