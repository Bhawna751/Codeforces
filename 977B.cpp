#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    string s; cin>>s;
    int ans=0;
    string repeating;
    for(int i=0;i<n-1;i++){
        int cnt;
        for(int j=0;j<n-1;j++){
            if(s[i]==s[j] && s[i+1] == s[j+1]) cnt++;
        }
        if(ans<cnt){
            ans = cnt;
            repeating = s.substr(0,2);
        }
    }
    cout<<repeating<<endl;
    return 0;
}