/*
#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    int n = s.size();
    string ans = "";
    char curr;
    char past = s[0];
    ans += past;

// star with a string containing the first letter then check if the next letter is the same as the last one

    for (int i = 1; i < n; i++) {
        curr = s[i];

// for cases that they are equal, we remove the last letter from the string and our past letter becomes the one before the last one
        if (curr == past) {
            ans = ans.substr(0, ans.size()-1);
            past = ans[ans.size()-1];
// for cases that theyre different we add the letter to the string and our past letter becomes the current one
        } else {
            ans += curr;
            past = curr;
        }
    }
// check if there are any remaining consecutive letters
    if (ans.size() >= 2 and ans[ans.size()-1] == ans[ans.size()-2]) {
        ans = ans.substr(0, ans.size()-1);
    }

    cout << ans << "\n";
}

signed main() {
    string s;
    cin >> s;
    solve(s);
}
*/
#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    int n = s.size();
    // we have a string with the size of the input string (because since we are removing letters,
    // the size of the output string will always be smaller or equal compared to the input string)
    string ans(n, ' ');

    // we will use an index to keep track of the current position in the output string
    int idx = 0;

    char curr;
    // as always, our past letter is the first letter of the input string
    char past = s[0];

    // since we got a TLE, we can use a string as a stack to make it faster
    // we add the first letter to the stack and update the index
    ans[idx++] = past;

    for (int i = 1; i < n; i++) {
        curr = s[i];
        // if we found a letter that is the same as the last one, we just have to decrease the index (equals removing it from the stack)
        if (curr == past) {
            idx--;
            // we also update the past letter to the one before the last one
            // but we have to be careful with the index, since it can be negative
            if (idx > 0) {
                past = ans[idx-1];
            } else {
                past = ' ';
            }
        // if ther are different, we just add the letter to the stack and update the past letter
        } else {
            ans[idx++] = curr;
            past = curr;
        }
    }

    // same as before, we have to check if there are any remaining consecutive letters
    // if there are, we just bring back the index to the letter before the last letter
    if (idx >= 2 and ans[idx-1] == ans[idx-2]) {
        idx--;
    }

    // now we just print the output string from the beginning to the index
    cout << ans.substr(0, idx) << '\n';
}

signed main() {
    string s;
    cin >> s;
    solve(s);
}
