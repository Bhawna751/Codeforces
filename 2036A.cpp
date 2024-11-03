#include <bits/stdc++.h>
using namespace std;
string solve(int arr[],int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int a = arr[i];
        int b = arr[i + 1];
        int semi = abs(a - b);
        if (semi != 5 && semi != 7)
            return "No";
    }
    return "Yes";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        string ans = solve(arr,n);
        cout<<ans<<endl;
    }
    return 0;
}