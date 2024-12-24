#include <bits/stdc++.h>
/* sort basico, nao tem segredo */
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
	int x, y;
	cin >> x >> y;
	vector<int> array(2);
	array[0] = x;
	array[1] = y;
	sort(array.begin(), array.end());
	cout << array[0] << " " << array[1] << endl;
	}
	return 0;
}
