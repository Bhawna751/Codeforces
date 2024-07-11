#include <bits/stdc++.h>

using namespace std;
void solve(){
    long long len,n;
        cin >>len>>n;
        vector<long long> v(n);
        for (int i = 0; i<n; ++i) {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        long long x =0,y=0,cnt=0;
        for(auto it : v){
            if(it==2) cnt++;
            else if(it==1) x++;
            else y++;
        }
        long long ans=0;
        if(v[n-1]==1){
            cout<<n-1<<endl;
            return;
        }
        for(int i=0;i<n-1;i++){
            if(v[i]==1) continue;
            x+=(v[i]);
            ans+=(v[i]-1);
        }
        ans+=x;
        cout<<ans<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
