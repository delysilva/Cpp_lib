/*#include <bits/stdc++.h>
using namespace std;

signed main(){
    unordered_map<string, int> m;
    string city;
    int n, e;

    cin >> n >> e;

    for(int i = 0; i < n; i++){
        cin >> city;
        m[city] = 0;
    }

    for(int i = 0; i < e; i++){
        cin >> city;
        m[city] = 1;
    }

    for(auto it = m.begin(); it != m.end(); it++){
        if(it->second == 0){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }

}
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> popular(n);

    vector<string> xpress(m);

    string s;

    for (int i = 0; i < n; i++) {
        cin >> s;
        popular[i] = s;
    }

    set<string> solve;
    for(int i = 0; i < m; i++){
        cin >> s;
        solve.insert(s);
    }

    for (int i = 0; i < n; i++) {
        string l = popular[i];
        if(solve.count(l)){
            cout << "Yes" << "\n";
        }else{
            cout << "No" << "\n";
        }
    }
}