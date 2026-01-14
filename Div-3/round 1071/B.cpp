// Blackslex and Showering
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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Step 1: compute total sum
        long long total = 0;
        for (int i = 0; i + 1 < n; i++) {
            total += abs(a[i] - a[i + 1]);
        }

        long long maxSaving = 0;

        // Step 2: delete first element
        maxSaving = max(maxSaving, (long long)abs(a[0] - a[1]));

        // Step 3: delete last element
        maxSaving = max(maxSaving, (long long)abs(a[n - 2] - a[n - 1]));

        // Step 4: delete a middle element
        for (int i = 1; i + 1 < n; i++) {
            long long saving =
                abs(a[i - 1] - a[i]) +
                abs(a[i] - a[i + 1]) -
                abs(a[i - 1] - a[i + 1]);

            maxSaving = max(maxSaving, saving);
        }

        // Step 5: result
        cout << total - maxSaving << "\n";
    }
    return 0;
}
