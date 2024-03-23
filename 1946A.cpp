#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,i;
        cin>>n;
        
        vector<int> a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int ind = (n-1)/2;
        int ans=1;
        while(ind<n-1 && a[ind]==a[ind+1]){
            ind++;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}