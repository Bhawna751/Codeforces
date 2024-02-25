#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int t;
    string shape;
    int ans;
    while(cin>>t){
        ans=0;
        while(t--){
            cin>>shape;
            if(shape == "Tetrahedron") ans+=4;
            else if(shape == "Cube") ans+=6;
            else if(shape == "Octahedron") ans+=8;
            else if(shape == "Dodecahedron") ans+=12;
            else if(shape == "Icosahedron") ans+=20;
        }
        cout<<ans<<endl;
    }
    return 0;
}