#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long ans = a;
        ans += b/3;
        int remEx=b%3;
        int var = (remEx+c)%3 ? 1:0;
        if((remEx==1 && c<2) || (remEx == 2 && c<1)) cout<<-1<<endl;
        else cout<<ans + (remEx + c)/3 + var<<endl; 

    }
    return 0;
}
