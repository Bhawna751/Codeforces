#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int maxPrefixSubsequence(string a, string b) {
    int n = a.length();
    int m = b.length();
    int j = 0;
    for (int i = 0; i < m && j < n; ++i) {
        if (a[j] == b[i]) {
            ++j;
        }
    }
    return j;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        cout << maxPrefixSubsequence(a, b) << endl;
    }
    return 0;
}

