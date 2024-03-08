#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[1001];
    string s;
    cin>>s;
    int cnt=0,n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='+')continue;
        else{
            arr[cnt++]=s[i]-'0';
        }
    }
    sort(arr,arr+cnt);
    for(int i=0;i<cnt-1;i++){
        cout<<arr[i];
        if(cnt==i-1){
            break;
        }
        cout<<'+';
    }
    cout<<arr[cnt-1];
    return 0;
}