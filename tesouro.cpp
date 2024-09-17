#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    int N, X, Y;
    string S;

    cin >> N >> X >> Y;
    cin >> S;
    for(char movimento : S){
        if(movimento == 'C'){
            X--;
        }else if(movimento == 'B'){
            X++;
        }else if(movimento == 'D'){
            Y++;
        }else if(movimento == 'E'){
            Y--;
        }
    }
    cout << X << " " << Y << endl;
}