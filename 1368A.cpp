#include<iostream>
using namespace std;

int main(){
    int a,b,n,t;
    cin>>t;
    int sum,count;
    while(t--){
        sum=0;
        count=0;
        cin>>a>>b>>n;
        while(sum<=n){
            if(a<=b){
                a+=b;
                sum=a;
            }
            else {
                b+=a;
                sum=b;
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}