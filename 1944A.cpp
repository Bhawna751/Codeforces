#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long ans=1;
        if(k==0)cout<<n<<endl;
        else if(n==k)cout<<ans<<endl;
        else{
            long long total=(n*(n-1))/2;
            if(k==total || n==k)cout<<ans<<endl;
            else if(total-k >= n){
                ans=n;
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}