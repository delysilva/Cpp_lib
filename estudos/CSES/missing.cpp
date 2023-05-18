#include <bits/stdc++.h>
using namespace std;

signed main(){
    int n, num;

    cin >> n;
    vector<int> v((n+10), 1);

    for(int j = 1; j < n; j++){
        cin >> num;
        v[num] = 0;
    }

    for(int i = 1; i <= n; i++){
        if(v[i] == 1){
            cout << i; 
            break;
        }
    }

}