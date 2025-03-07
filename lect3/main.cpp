#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int countPairs(int n, vector<int>& A) {
    unordered_map<int, int> freq;

       for (int num : A) {
        freq[num]++;
    }

    int totalPairs = 0;

       for (auto& pair : freq) {
        int k = pair.second;
        if (k >= 2) {
            totalPairs += k * (k - 1) / 2;
        }
    }

    return totalPairs;
}

int main() {
    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

        cout << countPairs(n, A) << endl;

    return 0;
}