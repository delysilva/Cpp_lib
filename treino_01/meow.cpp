#include <bits/stdc++.h>
using namespace std;

signed main(){
    string word;
    int t, size;
    int flag = 0;

    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> size;
        cin >> word;
        if(word[0] != 'M' or word[0] != 'm'){
            cout << "NO" << "\n";
        }else{
            char curr = word[0];
            for(int j = 1; j < size; j++){
                if(curr == 'm' or curr == 'M'){
                    if((word[j] != 'm' and word[j] != 'M') and (word[j] != 'e' and word[j] != 'E')){
                        cout << "NO" << "\n";
                        flag = 1;
                        break;
                    }
                }
                else if(curr == 'e' or curr == 'E'){
                    if((word[j] != 'e' and word[j] != 'E') and (word[j] != 'o' and word[j] != 'O')){
                        cout << "NO" << "\n";
                        flag = 1;
                        break;
                    }
                }
                else if(curr == 'o' or curr == 'O'){
                    if((word[j] != 'o' and word[j] != 'O') and (word[j] != 'w' and word[j] != 'W')){
                        cout << "NO" << "\n";
                        flag = 1;
                        break;
                    }
                }
                else if(curr == 'w' or curr == 'W'){
                    if(word[j] != 'w' and word[j] != 'W'){
                        cout << "NO" << "\n";
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag == 0){
                cout << "YES" << "\n";
            }
        }
    }
    }