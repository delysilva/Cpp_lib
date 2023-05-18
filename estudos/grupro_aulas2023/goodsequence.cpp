#include <bits/stdc++.h>
using namespace std;

signed main(){
    unordered_map<int, int> m;
    int n;
    int num;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num;
        m[num]++;
    }
    
    int ans = 0;
    for(auto it = m.begin(); it != m.end(); it++){
        if(it-> second != it->first){
            if(it->second > it->first){
                ans += it->second - it->first;
            }else{
                ans += it->second;
            }
        }
    }

    cout << ans << "\n";

}