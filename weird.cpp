#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin >> N;

    cout << N << " "; 

    while(N != 1){
        if(N % 2 != 0){
            N = (N*3)+1;
        } else {
            N = N/2;
        }
        cout << N << " "; 
    }

    cout << endl;
    return 0;
}
