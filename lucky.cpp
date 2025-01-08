#include <bits/stdc++.h>
using namespace std;

int soma_digitos(string numero) {
    int soma = 0;
    for (char digito : numero) {
        soma += digito - '0'; 
    }
    return soma;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        string s1 = s.substr(0, 3); 
        string s2 = s.substr(3, 3); 

        int soma1 = soma_digitos(s1);
        int soma2 = soma_digitos(s2);

    
        if (soma1 == soma2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
