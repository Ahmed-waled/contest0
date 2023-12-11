#include<bits\stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
void solve(){
    int n, q, type, val, cntEven = 0, cntOdd = 0;
    ll sum = 0;
    cin >> n >> q;
    for(int i = 0 ; i < n; ++i){
        int tmp;cin>>tmp;
        sum += tmp;
        if(tmp & 1)
            cntOdd++;
        else
            cntEven++;
    }
    while(q--){
        cin >> type >> val;
        if(type){
            sum += 1ll * cntOdd * val;
            if(val & 1) {
                cntEven += cntOdd;
                cntOdd = 0;
            }
        }
        else{
            sum += 1ll * cntEven * val;
            if(val & 1){
                cntOdd += cntEven;
                cntEven = 0;
            }
        }
        cout << sum << '\n';
    }
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
