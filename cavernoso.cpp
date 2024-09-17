#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;

    int freq[1005] = {0};

    cin >> n;
    for(int i = 0;i < n; i++){
        string s; cin >> s;
        freq[s.size()]++;
    }
    int ans = 0;
    for (int i = 0; i < 1005; i++){
        if (freq[i] > freq[ans]){
            ans = i;
        }
    }
    cout << ans << "\n";                
}