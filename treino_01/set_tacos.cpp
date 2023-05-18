#include <bits/stdc++.h>
using namespace std;

signed main(){
    set<int> estoque;
    int c;
    int ans = 0;
    cin >> c;
    
    int novo;

    for(int  i = 0; i < c; i++){
        cin >> novo;
        if(estoque.find(novo) == estoque.end()){
            ans += 2;
            estoque.emplace(novo);

        }else{
            estoque.erase(novo);
        }

    }
    cout << ans;

}