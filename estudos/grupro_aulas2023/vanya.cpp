/*
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int lamps, size;
    int x;
    cin >> lamps >> size;

    set<int> s;


    for(int i = 0; i < lamps; i++){
        cin >> x;
        s.emplace(x);
    }

    float ans = 0;

    // we consider the cases that there are no lamps in the first or last position
    // first case, the first lamp is not in the first position but it has to enlighten the first position
    if(!s.count(0)){
        ans = *s.begin();
    }

    // second case, the last lamp is not in the last position but it has to enlighten the last position
    if(!s.count(size)){
        ans = max(ans, (float)(size - *s.rbegin()));
    }
    // after all the cases, we have an basic answer that could be 0 or the maximum between the distance of the first lamp and the begining or last lamp and the end
    auto past = s.begin();
    for(auto curr = ++past; curr != s.end(); curr++){
        ans = max(ans, (float)(*curr - *past) / 2);
        past = curr;
    }
    cout << fixed << setprecision(10) << ans << "\n";

}

*/

#include <bits/stdc++.h>
using namespace std;

    
int main(){
    int n,a[1500],l;
    float ans;

    cin >> n >> l;
    for (int i = 0; i < n; i++){
        cin >> a[i];}

    sort(a,a+n);

    ans = max(float(a[0]),float(l - a[n-1]));

    for (int i = 0; i < n-1; i++){
        ans = max(ans, float(a[i+1] - a[i])/2);
    }

    cout << setprecision(9) << fixed << ans << "\n";
}