#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b){
    int mid = (a + b) / 2;
    cout << 2*(a - b) << "\n";
    for(int i = mid; i <= a; i++)
    {
        cout << i << " ";
    }
    for (int i = a - 1; i >= b; i--)
    {
        cout << i << " ";
    }
    for (int i = b + 1; i < mid; i++){
        cout << i << " ";
    }
    cout << "\n";
    

}

signed main(){
    int t, a, b;

    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> a >> b;
        solve(a, b);
    }

}