#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int p1,p2,p3;
        cin>>p1>>p2>>p3;
        int total = p1+p2+p3;
        if(total%2==1){
            cout<<-1<<endl;
            continue;
        }
        else if(p1+p2>=p3){
            cout<<total/2<<endl;
        }
        else{
            int cnt = p1;
            p3 = p3 - p1;
            if(p2>p3) swap (p2,p3);
            cnt += p2;
            p3 = p3 - p2;
            if(p3&1) cout<<-1<<endl;
            else cout<<cnt<<endl;

        }
    }

    return 0;
}


 