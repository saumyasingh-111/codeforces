// ques  B  round 806 div 4- "ICPC balloons"

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<char> st;
        for (char c : s) {
            st.insert(c);  
        }

        int balloons = n + st.size();
        cout << balloons << "\n";
    }
}