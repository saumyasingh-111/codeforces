//  beautiful average
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
        int mx = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mx = max(mx, x);
        }
        cout << mx << "\n";
    }
    return 0;
}