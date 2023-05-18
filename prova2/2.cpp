#include <bits/stdc++.h>
using namespace std;

signed main(){
    int n, k;
    cin >> n >> k;
    char input;
    vector<char> arr(n);

    for(int i = 0; i < n; i++){
        cin >> input;
        arr.push_back(input);
    }

    int l = 0;
    int r = 1;
    int greater = 1;
    int count = 1;
    int changes = k;
    char curr = arr[l];
    while(r < n){
        if(curr == arr[r]){
            count++;
            r++;
        }else{
            if(changes > 0){
                count++;
                r++;
                changes--;
            }else{
                l = r + 1;
                r = l + 1;
                if(count > greater){
                    greater = count;
                    count = 1;
                }
            }
        }
    }
    cout << greater;
}