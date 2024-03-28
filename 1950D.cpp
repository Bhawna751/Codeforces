#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	queue<string> q;
	q.push("1");
	vector<int> v;
	while(1){
		string top=q.front();q.pop();
		if(top.size()>5) break;
		q.push(top+"0");
		q.push(top+"1");
		v.push_back(stoi(top+"0"));
		v.push_back(stoi(top+"1"));
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ok=0;
		for(int i=0;i<v.size();i++){
			if(n==v[i]){
				ok=1;
			}
		}
		if(ok){
			cout<<"YES"<<endl;
		}
		else{
			for(int i=0;i<v.size();i++){
				while(n%v[i]==0){
					
					n/=v[i];
				}
			}
			if(n==1) cout<<"YES";
			else cout<<"NO";
			cout<<endl;
		}
			
	}
}