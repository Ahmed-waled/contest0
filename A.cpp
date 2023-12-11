#include<bits\stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    cout<<(a + b == c ? "+\n": "-\n");
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