#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n != 5) {
            cout << "NO\n";
            continue;
        }

        string target = "Timur";
        sort(s.begin(), s.end());
        sort(target.begin(), target.end());

        if (s == target) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}

