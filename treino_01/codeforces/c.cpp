#include <bits/stdc++.h>
using namespace std;
/*/
int solve(int tam, vector<char> word){
    char curr;
    for(int i = 0; i < tam; i++){
        char fix = word[i];
        for(int j = i + 1; j < tam; j++){
            curr = word[j];
            if(fix == curr){
                if((j - i)%2 == 1){
                    return 1;
                }
            }
        }
    }
    return 0;

}
/*/


signed main(){
    int n, t;
    char curr;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        int ans = 0;
        vector<char> word;
        for(int j = 0; j < n; j++){
            cin >> curr;
            word.push_back(curr);
        }

        for(int k = 0; k < n; k++){
            char fix = word[k];
            for(int c = k + 1; c < n; c++){
                curr = word[c];
                if(fix == curr){
                    if((c - k)%2 == 1){
                        ans = 1;
                        break;
                }
            }
        }
    }
//        int ans = solve(n, word);
        if(ans == 1){
            cout << "NO" << "\n";
        }else{
            cout << "YES" << "\n";
        }
    }
}