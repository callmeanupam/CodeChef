#include<bits/stdc++.h>
using namespace std;

void generateSequence(int n) {
    vector<int> sequence;
    if (n % 3 == 0) {
        for (int i = 1; i <= n; i += 3) {
            sequence.push_back(i);
            sequence.push_back(i + 2);
            sequence.push_back(i + 1);
        }
    } else if (n % 3 == 1) {
        for (int i = 1; i <= n - 4; i += 3) {
            sequence.push_back(i);
            sequence.push_back(i + 2);
            sequence.push_back(i + 1);
        }
        sequence.push_back(n);
        sequence.push_back(n - 1);
        sequence.push_back(n - 2);
        sequence.push_back(n - 3);
    } else {
        sequence = {4, 5, 2, 1, 3};
        for (int i = 6; i <= n; i += 3) {
            sequence.push_back(i + 2);
            sequence.push_back(i + 1);
            sequence.push_back(i);
        }
    }

    for (int i = 0; i < sequence.size(); ++i) {
        cout << sequence[i] << " ";
    }
    cout << endl;
}

int main() {
    int num_tests;
    cin >> num_tests;
    for (int t = 1; t <= num_tests; t++) {
        int n;
        cin >> n;
        generateSequence(n);
    }
    return 0;
}
