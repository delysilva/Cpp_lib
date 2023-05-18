#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    vector<int> v;
    int n, ans = 0;
    int limit = 4294967296;

    string s;

    cin >> n;
    v.push_back(1);

    for(int i = 0; i < n; i++){
        cin >> s;
        if(s == "add"){
            ans += v.back();
        }else if(s == "for"){
            int num;
            cin >> num;
            v.push_back(min(limit ,num * v.back()));
        }else{
            v.pop_back();
        }
    }
    if(ans >= limit){
        cout << "OVERFLOW!!!" << endl;
    }else{
        cout << ans << endl;
    }
}