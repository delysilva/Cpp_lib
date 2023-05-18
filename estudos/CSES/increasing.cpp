#include<bits/stdc++.h>
#define ll long long
using namespace std;

signed main(){
    int n;
    ll curr, prev, ans = 0;
    cin >> n;
    cin >> prev;
    for(int i = 1; i < n; i++){
        cin >> curr;
        if(curr < prev){
            ans += prev - curr;
            curr += prev - curr;
        }
        prev = curr;

    }
    cout << ans;
}