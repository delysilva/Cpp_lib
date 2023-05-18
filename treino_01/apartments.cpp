#include <bits/stdc++.h>
using namespace std;

signed main(){
    multiset<int> ppl;
    int n, m, k;
    int ans = 0;
    cin >> n >> m >> k;

    int person;
    for(int  i = 0; i < n; i++){
        cin >> person;
        ppl.emplace(person);
    }

    int ap;
    auto it = ppl.end();
    it--;
    if(k >= *it){
        cout << ppl.size();
    }else{
        for(int i = 0; i < m; i++){
            cin >> ap;
            ap = ap + k;
            auto temp = ppl.lower_bound(ap);
            if(temp != ppl.end()){
                if(*temp >= (ap - k) and *temp <= (ap + k)){
                    ppl.erase(temp);
                    ans++;
                }
            }

        }
        cout << ans;
    }
}