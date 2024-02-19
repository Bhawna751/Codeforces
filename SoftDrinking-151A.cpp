#include<iostream>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink = k*l;
    int toastbydrink = drink / nl;
    int limes = c*d;
    int toastbysalt = p/np;
    int ans = min(min(toastbydrink,toastbysalt),limes)/n;
    cout << ans;
    return 0;
}