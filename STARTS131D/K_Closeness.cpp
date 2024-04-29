#include<bits/stdc++.h>
using namespace std;

long long findMinDifference(int n, int diff, multiset<int>& vals) {
    long long min_diff = numeric_limits<long long>::max();
    while (true) {
        auto start = *vals.begin();
        auto end = *vals.rbegin();
        min_diff = min(min_diff, static_cast<long long>(end - start));
        if (diff > (end - start)) break;
        int steps = (end - start) / diff;
        start += steps * diff;
        vals.erase(vals.begin());
        vals.insert(start);
    }
    for (int i = 0; i < n; i++) {
        auto start = *vals.begin();
        auto end = *vals.rbegin();
        min_diff = min(min_diff, static_cast<long long>(end - start));
        start += diff;
        vals.erase(vals.begin());
        vals.insert(start);
    }
    return min_diff;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, diff;
        cin >> n >> diff;
        multiset<int> vals;
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            vals.insert(val);
        }
        long long min_diff = findMinDifference(n, diff, vals);
        cout << min_diff << endl;
    }
    return 0;
}
