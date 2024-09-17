#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, max_pontos = 1, counter = 1;
    cin >> N;
    
    vector<int> valores(N);
    for (int i = 0; i < N; i++) {
        cin >> valores[i];
    }

    for (int i = 1; i < N; i++) {
        if(valores[i] == valores[i - 1]) {
            counter++;
        } else {
            max_pontos = max(max_pontos, counter);
            counter = 1;
        }
    }
    
    max_pontos = max(max_pontos, counter);
        
    cout << max_pontos << endl;

    return 0;
}
