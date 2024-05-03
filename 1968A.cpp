#include<iostream>
using namespace std;
int gcd(int a, int b) 
{    
    int result = min(a, b); 
    while (result > 0) { 
        if (a % result == 0 && b % result == 0) { 
            break; 
        } 
        result--; 
    } 
    return result; 
} 
int main(){
    int t;cin>>t;
    while(t--){
        int x;cin>>x;
        int maxi=-1e9;
        int y=0;
        for(int i=1;i<x;i++){
            if(gcd(x,i)+i>=maxi)
            y = i;
            maxi = gcd(x,i)+i;
        }
        cout<<y<<endl;
    }
    return 0;
}