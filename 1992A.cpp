#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> nums = {a, b, c};
        int op = 5;
        while (op > 0) {
            sort(nums.begin(), nums.end());
            nums[0]++;
            op--;
        }
        long long maxi = 1;
        for (int i = 0; i < 3; i++) {
            maxi *= nums[i];
        }
        
        cout << maxi << endl;
    }
    
    return 0;
}
