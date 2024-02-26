#include <bits/stdc++.h>
using namespace std;
int main()
{
 
    long long  t,n,i,odd,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        odd=0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            if(a%2!=0)
                odd++;
        }
        if(n%2==0 && odd==n)
            cout<<"NO"<<endl;
        else if(odd >0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
 
    }
}