#include<iostream>
using namespace std;

int main(){
    int k,n,w;
    int ans=0,sum=0;
    cin>>k>>n>>w;
    
    for(int i=1;i<=w;i++){
        sum +=  i*k;
    }
    if(sum<=n) cout<<0;
    else{
        ans = sum-n;
        cout<<ans;
    }
    return 0;
}