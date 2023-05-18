#include <bits/stdc++.h>
using namespace std;

signed main(){
    int n, ans = 1, curr = 1;
    string s;
    char prev;

    cin >> s;
    n = s.size();
    prev = s[0];
    for(int i = 1; i < n; i++){
        if(s[i] == prev){
            curr += 1;
            if(curr > ans) ans = curr;
        }else{
            curr = 1;
        }
        prev = s[i];

    }

    cout << ans;

}