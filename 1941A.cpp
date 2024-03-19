#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int Left[n],Right[m];
        for(int i=0;i<n;i++){
            cin>>Left[i];//
        }
        for(int i=0;i<m;i++){
            cin>>Right[i];
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(Left[i]>k)continue;
            for(int j=0;j<m;j++){
                if(Left[i]+Right[j]<=k){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}