#include <bits/stdc++.h>
using namespace std;

signed main(){
    vector<int> v;

    int n, num;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num;
        if(i%2 == 0){
            v.push_back(num);
        }else{
            v.insert(v.begin(), num);
        }
    }
    if(n%2 == 1){
        for(int i = n-1; i >= 0; i--){
            cout << v[i] << " ";
        }
    }else{
        for(int i = 0; i < n; i++){
            cout << v[i] << " ";
        }
    }
}