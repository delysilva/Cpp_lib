#include <bits/stdc++.h>
using namespace std;

signed main(){
    int n, curr;
    int prev;

    cin >> n;

    vector<int> v(n+1);
    
    for(int i = 0; i < n; i++){
        cin >> curr;
        v[curr - 1] = i;
    }

    int ans = 1;
    prev = v[0];
    for(int i = 1; i < n; i++){
        if(v[i] < prev){
            ans++;
        }
        prev = v[i];
    }
    cout << ans;
}