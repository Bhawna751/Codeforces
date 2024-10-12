#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;//100101
        cin>>s;
        int ans=0, ind1=0,ind2=0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '1'){
                ind1=i;
                break;
            }
        }
        for(int i=s.length();i>=0;i--){
            if(s[i]=='1'){
                ind2=i;
                break;
            }
        }
        for(int i = ind1;i<ind2;i++){
            if(s[i] == '0') ans++;

        }
        cout<<ans<<endl;
    }
    return 0;
}