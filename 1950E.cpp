#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
       int n;
       string s;
       cin>>n>>s;
       map<char,int>mpp;
       for(auto it:s){
           mpp[it]++;
       }
       int flag=0;
       for(auto it:mpp){
           if(it.second>=(n-1)){
               flag=1;
               break;
           }
       }
       
       if(flag){
           cout<<"1"<<endl;
           continue;
        }
       flag=-1;
       for(int i=2;i<=n;i++)
       {
           if(n%i==0)
           {   int c=0;
               for(int j=0;j<i;j++)
               {
                   map<char,int>mp;
                   int c1=0;
                   for(int k=j;(k<n);k+=i)
                   {
                       c1++;
                       mp[s[k]]++;
                       
                   }
                   
                   int y_1=-1;
                   for(auto it:mp)
                   {
                       if(it.second==(c1-1))
                       {
                           y_1=1;
                           break;
                       }else if(it.second==c1)
                       {
                           y_1=0;
                       }
                   }
                   
                   if(y_1==-1)
                   {
                       c=INT_MAX;
                       break;
                   }else if(y_1==1)
                   {
                       c++;
                   }
               }
               
               if(c<=1)
               {
                   flag=i;
                   break;
               }
 
           }
       }
       
       
       if(flag==-1)
       {
           cout<<flag<<endl;
       }else
       {
           cout<<flag<<endl;
       }    
    }
    return 0;
}