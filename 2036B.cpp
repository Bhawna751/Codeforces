#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans=0;
        
        unordered_map<int,int> mpp;// 2,15 1,15
        for(int i=0;i<k;i++){
            int a,b;
            cin>>a>>b;
            mpp[a] += b;
        }
        vector<pair<int,int>> sorted(mpp.begin(), mpp.end());
        sort(sorted.begin(), sorted.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
});
        for(auto it:sorted){
            int brand = it.first;
            int cost = it.second;
            n--;
            ans += cost;
            if(n==0)break;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}