// ques 4 B  round 944 div 4

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string original = s;

        bool allsame = true;
        for (char c : s) {
            if (c != s[0]) {
                allsame = false;
                break;
            }
        }

        if (allsame) {
            cout << "NO\n";
        } else {
            sort(s.begin(), s.end());
            
            if (s == original) {
                for (size_t i = 1; i < s.size(); i++) {
                    if (s[i] != s[0]) {
                        swap(s[0], s[i]);
                        break;
                    }
                }
            }

            cout << "YES\n" << s << "\n";
        }
    }
}
