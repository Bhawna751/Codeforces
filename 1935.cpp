#include <bits/stdc++.h>


using namespace std;

int main()
{
    int t;
    cin >> t; // 1
    
    string s;
    while (t--)
    {
        int n;       // 6
        cin >> n;
        cin >>s ;
        if (s[0] <= s[s.size() - 1])
            cout << s << endl;
        else
        {
            string q=s;
            reverse(q.begin(),q.end());
            
            cout<<q<<s<<endl;
        }

    }

    return 0;
}