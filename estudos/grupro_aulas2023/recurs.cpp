#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    if(n == 1){
        cout << n;
    }else{ 
        solve(n-1); 
        cout << " " << n << " "; 
        solve(n-1);
    }

}

signed main(){
    int n;
    cin >> n;
    solve(n);
}