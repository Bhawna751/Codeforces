// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
#include <cstdlib>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int t;
    cin>>t;
    string s;
    cin>>s;
    for(int i=0;i<t;i++){
        for(int j=0;j<n-1;j++){
            if(s[j] == 'B' && s[j+1]=='G'){
                s[j] = 'G';
                s[j+1] = 'B';
                j++;
            }
        }
    }
    cout<<s<<endl;

    return 0;
}
