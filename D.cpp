#include<bits\stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
void solve(){
    int a,b, n;
    ll sum = 0;
    cin >> a >> b >> n;
    for(int i = 0, tmp; i < n && cin>> tmp; ++i) {
        if (b + tmp <= a){
            b += tmp - 1;
            ++sum;
        }
        else {
            sum += b - max(1, a - tmp);
            b = min(b + tmp, a);
        }
    }
    cout<<sum + b <<'\n';
}
int main(){
    fastIO
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}