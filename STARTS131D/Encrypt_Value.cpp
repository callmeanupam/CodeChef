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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        long long ans = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] <= 1 || ans <= 1)
                ans = (ans + a[i]) % 1000000007;
            else
                ans = (ans * a[i]) % 1000000007;
        }
        cout << ans << "\n";
    }
    return 0;
}
