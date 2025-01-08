#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int counter = 0;

        string result;
        for (int i = 0; i < n; i++) {
            result.push_back(s[i]);
            if (result.size() >= 3) {
                if (result.substr(result.size() - 3) == "map" || result.substr(result.size() - 3) == "pie") {
                    result.pop_back();
                    counter++;
                }
            }
        }

        cout << counter << endl;
    }

    return 0;
}

