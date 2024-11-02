#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    string s; cin>>s;
    int ans=0;
    string repeating;
    for(int i=0;i<n-1;i++){
        string sub = s.substr(i,2);
        int cnt=0;
        for(int j=0;j<n-1;j++){
            if(s[j]==sub[0] && s[j+1] == sub[1]) cnt++;
        }
        if(ans<cnt){
            ans = cnt;
            repeating = sub;
        }
    }
    cout<<repeating<<endl;
    return 0;
}