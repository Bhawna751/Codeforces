#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;//3 2 3
        if(x>y)swap(x,y);
        if(x>z)swap(x,z);
        if(y>z)swap(z,y);
        if(y==z){
            cout<<"YES"<<endl;
            cout<<x<<" "<<x<<" "<<z<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}