#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int& it:a)cin>>i;
        vector<int>p(n);
        vector<int>b(n+1);
        int mex=0;
        for(int i=0;i<n;i++){
          if(a[i]>=0)p[i]=mex;
          else p[i]=mex-a[i];
          b[[p[i]]]=true;
          while(b[mex])mex++;
        }
        
        for(int i:p){
            cout<<i;<<" ";
        }
        cout<<endl;
    }
    return 0;
}