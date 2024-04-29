#include<bits/stdc++.h>
using namespace std;

int solve(int size, int costX, int costY, multiset<int>& elements) {
    int totalCost = 0;
    auto it = elements.begin();
    while (it != elements.end()) {
        int minCost = min(*it * costX, costY);
        totalCost += minCost;
        ++it;
    }
    return totalCost;
}

int main() {
    int testCases; // Number of test cases
    cin >> testCases;

    for (int t = 0; t < testCases; ++t) {
        int size, costX, costY;
        cin >> size >> costX >> costY;

        multiset<int> elements;
        for (int i = 0; i < size; ++i) {
            int element;
            cin >> element;
            elements.insert(element);
        }

        int result = solve(size, costX, costY, elements);
        cout << result << endl;
    }

    return 0;
}
