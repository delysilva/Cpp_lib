#include <bits/stdc++.h>
using namespace std;

#define loop(i, n) for(int i = 1; i <= n; i++)
#define int long long

signed main() {
    unordered_map<int, int> past;
    int n, x, curr;
    cin >> n >> x;
    vector<int> guys(n + 1);
    int flag = 0;

    loop(i, n) {
        cin >> curr;
        guys[i] = curr;
        past[curr] = i;
    }

    int p, temp;

    loop(i, n) {
        p = guys[i];
        temp = x - p;
        for(int j = 1; j <= n; j++) {
            if(i != j) {
                int check = temp - guys[j];
                if(past.find(check) != past.end() and past[check] != j and past[check] != i) {
                    cout << i << " " << j << " " << past[check] << "\n";
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1) {
            break;
        }
    }
    if(flag == 0) {
        cout << "IMPOSSIBLE" << "\n";
    }
}