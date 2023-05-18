#include <bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    int a, b;

    cin >> n;
    vector<int> v(n + 2, 0);


    for(int i = 1; i <= n ; i++){
        cin >> a >> b;
        v[a] = 1;
        v[b] = 1;
    }

    for(int i = 1; i <= n; i++){
        if(v[i] == 0){
            cout << "N";
        }else{
            cout << "Y";
        }
    }

}
