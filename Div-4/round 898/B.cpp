// round 898 Problem-B

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
        
        vector<int> a(n);
        long long pro = 1;  

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int idx=min_element(a.begin(),a.end())-a.begin();
        a[idx]++;
        

        for (int i = 0; i < n; i++) {
            pro *= a[i];
        }

        cout << pro << "\n";
    }
}
