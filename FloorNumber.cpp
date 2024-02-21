#include<iostream>
using namespace std;

int main(){
    int t,n,x;
    cin>>t;
    while(t--){
        cin>> n>>x;
        int current=2, floor=1;
        while(current<n){
            current+=x;
            floor++;
        }
        cout<<floor<<endl;
    }
    return 0;
}