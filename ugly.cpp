#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<char> str(n);
        int counter = 0;

        for (int i = 0; i < n; i++) {
            cin >> str[i];
        }

        for (int i = 0; i < (int)str.size(); i++) {
            if (i + 2 < (int)str.size() && str[i] == 'm' && str[i + 1] == 'a' && str[i + 2] == 'p') {
                str.erase(str.begin() + i + 2);
                counter++;
            } else if (i + 2 < (int)str.size() && str[i] == 'p' && str[i + 1] == 'i' && str[i + 2] == 'e') {
                str.erase(str.begin() + i + 2);
                counter++;
            }
        }

        cout << counter << endl;
    }

    return 0;
}

