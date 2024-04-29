#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int testCasesCount;
    cin >> testCasesCount;
    
    while (testCasesCount--) {
        int size, threshold;
        cin >> size >> threshold;

        vector<long long int> elements(size); 
        for (long long int &element : elements) cin >> element;

        sort(elements.begin(), elements.end());

        long long int totalExpense = 0;
        for (int i = 0; i < size; i++) {
            totalExpense += (i < threshold) ? ((elements[i] <= 3) ? 7 - elements[i] : elements[i]) : elements[i];
        }

        cout << totalExpense << "\n";
    }
    
    return 0;
}
