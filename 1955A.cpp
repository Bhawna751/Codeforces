#include<iostream>
using namespace std;

int main(){
    int ;cin>>t;
    while(t--){
        int n,a,b;cin>>n>>a>>b;
        if (a * 2 <= b) {
            cout << n * a << endl;
        } 
        
        else {
        
            int cost = (n / 2) * b;
        
            cost += (n % 2) * a;
            cout << cost << endl;
        }
    }
    return 0;
}