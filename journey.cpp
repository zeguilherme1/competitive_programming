#include <bits/stdc++.h>
using namespace std;

int solve(const vector<long long>& array, long long n, bool& verifica) {
    long long soma = 0;
    int counter = 0;
    int i = 0;

    if (array[0] == 1 && array[1] == 1 && array[2] == 1) {
        cout << n << endl;
        verifica = true;
        return 0;
    }

    while (soma < n) {
        soma += array[i];
        counter++;
        i = (i + 1) % array.size();
    }

    return counter;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> array(3);
        for (int i = 0; i < 3; i++) {
            cin >> array[i];
        }

        bool verifica = false;
        int resultado = solve(array, n, verifica);

        if (!verifica) {
            cout << resultado << endl;
        }
    }
    return 0;
}

