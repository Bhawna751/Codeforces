// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int mini=0,maxi=0;
    
    for(int i=1;i<n;i++){
        if(arr[i] > arr[maxi]) maxi = i;
    }
    for(int i=0;i<n;i++){
        if(arr[i] <= arr[mini]) mini = i;
    }
    int ans=0;
    ans += maxi;
    if(mini > maxi) ans += n-1-mini;
    else ans += n-1-mini-1;
    cout<<ans<<endl;
    return 0;
}
