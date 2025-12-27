// round 928 B

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> rows;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            int cnt = count(s.begin(), s.end(), '1');
            if (cnt > 0) rows.push_back(cnt);
        }

        bool square = true;
        for (int i = 1; i < rows.size(); i++) {
            if (rows[i] != rows[0]) {
                square = false;
                break;
            }
        }

        cout << (square ? "SQUARE\n" : "TRIANGLE\n");
    }
    return 0;
}
