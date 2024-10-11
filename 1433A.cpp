#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int ones = x%10;
        int total = (ones-1)*10;//
        int digits=0;
        while(x!=0){
            digits++;
            x=x/10;
        }
        total += (digits*(digits+1))/2;
        cout<<total<<endl;
    }
    return 0;
}