#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, maior = INT_MIN;
    
    while (true) {
        cin >> num; 
        
        if (num == 0) {
            break;
        }
        
        if (num > maior) {  
            maior = num; 
        }
    }

    cout << maior << endl;
    return 0;
}
