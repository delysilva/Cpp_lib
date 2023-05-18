#include <bits/stdc++.h>
using namespace std;

int check(string w, int size, int changes){
    int l = 0;
    int r = 1;

    int k = 0;
    int cnt = 1;
    int ans = 1;
    int nxt;
    bool key = false;

    if(size > 0){

        while (r < size)
        {

            if(w[l] == w[r]){

                cnt++;
                
            }else{

                if(k < changes)
                {
                    if(k == 0){
                        nxt = r + 1;
                        key = true;
                    }
                    r++;
                    k++;
                    cnt++;

                }else{

                    if(key == true){
                        l = nxt;
                        key = false;
                    }else{
                        l = r + 1;
                    }
                    r = l + 1;
                    cnt = 0;
                }

            }
            if(cnt > ans){
                ans = cnt;
            }
        }
        

    }
    return ans;

}

signed main(){
    int n, k;
    string w;

    cin >> n >> k;
    cin >> w;

    int ans = check(w, n, k);
    cout << ans;




}