#include <bits/stdc++.h>
using namespace std;

signed main(){
    map <int, int> past;
    int n, x, curr;
    int flag = 0;
    cin >> n >> x;

    for(int i = 1; i <= n; i++){
        cin >> curr;
        if(past.find(x - curr) != past.end()){
            cout << past[x-curr] << " " << i << "\n";
            flag = 1;
            break;
        }else{
            past[curr] = i;
        }
    }
    if(flag == 0){
        cout << "IMPOSSIBLE" << "\n";
    }


}