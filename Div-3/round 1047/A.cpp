// collatz conjecture
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, x;
        cin >> k >> x;

        while (k--) {
            x = 2 * x;  
        }

        cout << x << "\n";
    }
}