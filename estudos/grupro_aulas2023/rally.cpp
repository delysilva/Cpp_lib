#include<bits/stdc++.h>
using namespace std;

signed main() {
    int n;
    int ans = INT32_MAX;
    cin >> n;
    vector<int> x(n + 5);
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }

    int l = x[0], h = x[0];
    
    for(int i = 0; i < n; i ++) {
        l = min(l, x[i]);
        h = max(h, x[i]);
    }
    for(int i = l; i <= h; i++) {
        int cost = 0;

        for (int j = 0; j < n; j++){
            cost += (x[j] - i)*(x[j] - i);
        }
        ans = min(ans, cost);
    }
    cout << ans << "\n";
}