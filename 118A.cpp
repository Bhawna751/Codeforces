#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ans;
    for(int i=0;i<s.length();i++){
        char c = tolower(s[i]);
        if(c == 'a' || c == 'e' || c=='i' || c=='o' || c=='u' || c=='y'){
            continue;
        }
        else {
            cout<<"."<<c;
        }
    }
    cout<<ans;
    return 0;
}