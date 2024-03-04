#include<iostream>
using namespace std;
int main()
{
    long long n,k,l,q,r;
 
    long long cnt=0,cn=0,ans=0,sum=0 ;
    cin>>n>>k;
 
    long long a[n], b[n];
 
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    l=0, r=2*1e9+10;
 
    while(l<=r)
    {
        long long mid=(l+r)/2;
        cnt=0;
        for(int i=0;i<n;i++){
            cnt+=max(0ll , a[i]*mid-b[i] );
            if(cnt>k)break;
        }
 
        if(cnt<=k)l=mid+1, ans=mid;
        else r=mid-1;
    }
    cout<<ans;
 
return 0;
}