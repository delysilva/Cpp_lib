#include <bits/stdc++.h> 
using namespace std;

#define loop(i,n) for(int i = 0; i < (int)n; i++)
#define int long long

signed main(){
    int n, q, curr;
    cin >> n >> q;
    vector<int> v(n + 5);

    loop(i, n){
        cin >> v[i+1];
    }
    // prefix sum;
    loop(i, n){
        v[i + 1] = v[i] + v[i+1];
    }
    
    int l; 
    int r;


    loop(i, q){
        cin >> l >> r;
        cout << v[r] - v[l - 1] << "\n";
    }
}