#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum(ll n) { 
    return (n*(n+1))/2;
}
// sum : s s+1 s+2 .... e
ll sum(ll s, ll e){
    if(s<=1) return sum(e);
    return sum(e) - sum(s-1);
}
ll minS(ll k , ll n){
    ll l=1, r=k;
    while(l<r){
        ll m = (l+r)/2;
        ll s = sum(m,k);
        if(s==n) return k-m+1;
        else if(s>n) l=m+1;
        else r=m;
    }
    return k-l+2;
}
int main(){
    ll n,k;
    cin>>n>>k;
    if(n==1)cout<<0<<endl;
    //only one outflow source exists
    else if(n <= k) cout<<1<<endl;
    else{
        k--; n--;
        if(sum(k) < n) cout<<-1<<endl;
        else cout<<minS(k,n)<<endl;

    }
    return 0;
}
