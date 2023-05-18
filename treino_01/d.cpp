#include <bits/stdc++.h>
using namespace std;

signed main(){
    vector<long long> time(100002, 0);
    int m;
    int op, b;
	long long a;

    multiset<long long> values;

    cin >> m;

    for(int i = 1; i <= m; i++){
        cin >> op;

        if(op == 1){
            cin >> a;
            time[i] = a;
			values.insert(a);

        }else if(op == 2){
            cin >> b;
            auto to_remove = values.find(time[b]);
        	values.erase(to_remove);

        }else if(op == 3){
            cin >> b >> a;
            auto to_remove = values.find(time[b]);
			values.erase(to_remove);
            time[b] += a;
            values.emplace(time[b]);

        }else{
            cin >> a;
            a = time[a];
            auto it = values.find(a);
            auto begin = values.begin();
			if(it == begin){
				cout << 0 << "\n";
			}else{
				int ans = distance(begin, it);
				cout << ans << "\n";
			}
        }

    }
}