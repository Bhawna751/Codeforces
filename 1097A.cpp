#include<iostream>
using namespace std;

int main(){
    string input;
    cin>>input;//AS
    string c1,c2,c3,c4,c5;
    cin>>c1>>c2>>c3>>c4>>c5;//2H 4C TH JH AD
        if(input[0]==c1[0] || input[0]==c2[0] || input[0]==c3[0] || input[0]==c4[0] || input[0]==c5[0]){
            cout<<"YES"<<endl;
        }
        else if(input[1]==c1[1] || input[1]==c2[1] || input[1]==c3[1] || input[1]==c4[1] || input[1]==c5[1]){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    
    return 0;
}