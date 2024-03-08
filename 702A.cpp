#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long arr[n];//10
//802030518 598196518 640274071 983359971 71550121 96204862 799843967 446173607 796619138 402690754
    int maxi=1,cnt=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1)cout<<1;
    else{
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                cnt++;
            }
            else{
                maxi=max(maxi,cnt);
                cnt=1;
            }
        }
        maxi=max(maxi,cnt);
        cout<<maxi;
    }
    return 0;
}