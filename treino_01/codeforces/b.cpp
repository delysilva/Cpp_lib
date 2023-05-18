#include <bits/stdc++.h>
using namespace std;

signed main(){
    int n, t, odd, even, num;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t;
        odd = 0;
        even = 0;
        for(int j = 0; j < t; j++){
            cin >> num;
            if(num%2 == 0){
                even += num;
            }else{
                odd += num;
            }
        }
        if(even > odd){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }

    }
}