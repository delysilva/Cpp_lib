#include <bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin >> n;

    int mid = n/2;
    int smid = n - mid;
    if(n == 1){
        cout << "1";
    }
    else if(n <= 3){
        cout << "NO SOLUTION";
    }else{
        if(n == 4){
            cout << "3 1 4 2";
        }else{
            for(int i = 0; i < smid; i++){
                cout << n - (2*i) << " ";
            }
            for(int i = 0; i < mid; i++){
                cout << ((n - 1) - 2*i) << " ";
            }
        }
    }

}