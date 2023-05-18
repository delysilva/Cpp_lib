#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 112345;

int t[4*N];

void build(int i, int l, int r, vector<int> a){
    if(l == r){
        t[i] = a[l]; 
    }else{
        int m = (l + r)/2;
        build(2*i, l, m, &a);
        build(2*i + 1, m + 1, r, &a);

        t[i] = t[2*i] + t[2*i + 1];
    }
}

int query(int i, int l, int r, int ql, int qr){
    if (ql <= l && r <= qr){ 
        return t[i];
    }
    if(qr < l || r < ql) return 0;
    int mid = (l + r)/2;

    return query(2*i, l, mid, ql, qr) + query((2*i) + 1, mid + 1, r, ql, qr);
}

signed main(){
    int n, q;
    int num;
    int l, r;
    vector<int> a;
    a.push_back(0);

    cin >> n >> q;

    for(int i = 0; i < n; i++){
        cin >> num;
        a.push_back(num);

    }

    build(1, 1, n, &a);

    for(int i = 0; i < q; i++){
        cin >> l >> r;
        cout << query(1, 1, n, l, r) << "\n";
        
    }

}