#include <bits/stdc++.h>
using namespace std;

signed main(){
    set<int> s;
    int n, curr;

    cin >> n;
    for(int  i = 0; i < n; i++){
        cin >> curr;
        if(s.count(curr) == 1){
            s.erase(curr);
        }else{
            s.emplace(curr);
        }
    }
    cout << s.size() << "\n";

}