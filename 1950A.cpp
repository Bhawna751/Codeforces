// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b && a<c && b<c){
            cout<<"STAIR"<<endl;
        } 
        else if(a<b && b>c){
            cout<<"PEAK"<<endl;
        }
        else cout<<"NONE"<<endl;
    }

    return 0;
}