// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
#include <cstdlib>
using namespace std;

int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(), arr.end());
        int ans=1e9;
        for(int i=1;i<n;i++){
            ans = min(ans,abs(arr[i-1]-arr[i]));
        }
        
        cout<<ans<<endl;
    }

    return 0;
}
