#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a,b,c;
        priority_queue<long long>pq;
        for(int i=n;i>=1;i--)pq.push(i);
        cout<<2<<endl;
        while(pq.size()>1){
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();
            cout<<a<<" "<<b<<endl;
            c = a+b;
            if(c%2!=0)c++;
            c=c/2;
            pq.push(c);
        }
    }
    return 0;
}