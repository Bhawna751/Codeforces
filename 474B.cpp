// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n, ai, m, q;
	cin >> n; 
	int a[n];
	for(int i = 0; i < n; ++i){
		cin >> ai;
		if(i) a[i] = a[i - 1] + ai; 
		else a[i] = ai;
	}
	cin >> m;
	for(int i = 0; i < m; ++i){
		cin >> q;
		int l = 0, r = n - 1, mid;
		while(l <= r){
			mid = r - (r - l) / 2;
			if(a[mid] == q) break;
			if(a[mid] < q) l = mid + 1;
			else r = mid - 1;
		}
		if(q > a[mid]) ++mid;
		cout << mid + 1 << endl;
	}

    return 0;
}
