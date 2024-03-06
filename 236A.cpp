#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int n=s.length();
    int count =0;
    
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            count++;
        }  
    }
    if(count % 2 != 0 ){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else cout << "IGNORE HIM!"<<endl;
    return 0;
}