#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a;
        cin>>n;
        long long mid = n;
        n = 2 * n;
        vector<long long> arr;
        for(long long i=0;i<n;i++){
            cin>>a;
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end());
        long long ans = abs(arr[mid] - arr[mid-1]);
        cout<<ans<<endl;
    }
    return 0;
}
