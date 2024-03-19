#include <bits/stdc++.h>
using namespace std;
bool canMakeZero(vector<int>& arr,int i) {
    if(arr[i]>=2 && arr[i-1]>=1 && arr[i+1]>=1){
        return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);//1 3 5 5 2
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int flag=0;
        for(int i=1;i<n;i++){   
            if(arr[i]==max_element (i, n-1)){
                if (canMakeZero(arr,i)) {
                    arr[i]-=2;
                    arr[i-1]--;arr[i+1]--;
                    flag=1;
                }
             
                else {
                    flag=0;
                }
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
