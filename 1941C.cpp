#include<iostream>
using namespace std;
int deletions(string s,int n){
    int cnt=0;
    
    for(int i=0;i<n-2;i++){
        if(s.substr(i,3) == "pie" || s.substr(i,3) == "map"){
            cnt++;
            i=i+2;
        }
    }
    return cnt;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=deletions(s,n);
        cout<<ans<<endl;
    }
    return 0;
}