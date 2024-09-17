#include <bits/stdc++.h>
#include <string>
using namespace std;

bool bidirecional(const string &S) {
    if (S.length() < 3) {
        return false;
    }

    if (S[0] != '<' || S[S.length() - 1] != '>') {
        return false;
    }
    for (int i = 1; i < S.length() - 1; ++i) {
        if (S[i] != '=') {
            return false;
        }
    }

    return true;
}

int main() {
    string S;
    cin >> S;

    if (bidirecional(S)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
