#include <iostream>
#include <vector>
using namespace std;

int solve(const vector<long long>& array, long long n) {
    long long soma = 0;
    int counter = 0;
    int i = 0;

    long long ciclo = array[0] + array[1] + array[2];
    long long ciclos_completos = n / ciclo;
    soma = ciclos_completos * ciclo;
    counter = ciclos_completos * 3;

    while (soma < n) {
        soma += array[i];
        counter++;
        i = (i + 1) % 3;
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
        cout << solve(array, n) << endl;
    }
    return 0;
}

