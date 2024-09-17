#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int n; cin >> n;    

    int ans = 0;
    for(int i = 0, j = n-1; i < j;i++, j--) {
        if (s[i] != s[j]){
                ans++;
        }
    }
    cout << ans << "\n";
}