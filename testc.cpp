#include <bits/stdc++.h>
using namespace std;

int solve(const vector<int>& array, int n, bool& verifica) {
    int soma = 0;
    int counter = 0;
    int i = 0;

    for (int i = 1; i < 3; i++) {
        if (array[i] == 1 && array[i - 1] == 1) {
            cout << n << endl;
            verifica = true;
            return 0;
        }
    }

    while (soma < n) {
        if (verifica) {
            break;
        }
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
        int n;
        cin >> n;
        vector<int> array(3);
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

