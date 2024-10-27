#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxi1=0, maxi2=0;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            if(a>=maxi1) maxi1=a;
            if(b>=maxi2)maxi2=b;
        }
        cout<<2*(maxi1+maxi2)<<endl;
    }
    return 0;
}