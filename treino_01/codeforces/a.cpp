#include <bits/stdc++.h>
using namespace std;

signed main(){
    int n, a, b, c;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        if((a + b) == c){
            cout << "+" << "\n";
        }else{
            cout << "-" << "\n";
        }
    }

}