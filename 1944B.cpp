#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(2 * n);
        for (int i=0;i<2*n;i++) {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector<int> l(2*k);
        vector<int> r(2*k);
        int val = 0;
        for (int i = 0; i < 2 * k; i += 2) {
            l.push_back(a[i]);
            r.push_back(a[i + 1]);
            val ^= a[i] ^ a[i + 1];
        }
        for (int i = 0; i < 2 * k; ++i) {
            cout << l[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < 2 * k; ++i) {
            cout << r[i] << " ";
        }
        cout << endl;
    }
    return 0;
}