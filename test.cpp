#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Número de casos de teste
    while (t--) {
        int n;
        cin >> n; // Tamanho do vetor
        vector<int> a(n);

        // Entrada do vetor
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Ordenar o vetor para preparar os extremos
        sort(a.begin(), a.end());

        // Gerar os vetores b e c acumulados
        vector<int> b(n), c(n);
        b[0] = a[0];
        c[0] = a[n - 1]; // Começa do maior elemento para c

        for (int i = 1; i < n; i++) {
            b[i] = b[i - 1]; // O mínimo acumulado não cresce
            c[i] = c[i - 1]; // O máximo acumulado se mantém no maior
        }

        // Calcular o score
        int resultado = 0;
        for (int i = 0; i < n; i++) {
            resultado += (c[i] - b[i]);
        }

        cout << resultado << endl;
    }

    return 0;
}

