#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<char>> directions(n,vector<char>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>directions[i][j];
            }
        }
        int ans = 0;
        for(int i=0; i<n-1; i++){
            for(int j=m-1; j<m; j++){
                if(directions[i][j] == 'R'){
                    ans++;
                    directions[i][j] = 'D';
                }
            }
        }
        for(int i=n-1; i<n; i++){
            for(int j=0; j<m-1; j++){
                if(directions[i][j] == 'D'){
                    ans++;
                    directions[i][j] = 'R';
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}