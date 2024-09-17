#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int N;
    cin >> N;
    
    vector<double> numbers(N);

    for(int i = 0; i < N; i++){
        cin >> numbers[i];
    }

    for (int i = 0; i < N; i++){
        cout << fixed << setprecision(4) << sqrt(numbers[i]) << endl;
    }
    return 0;
}