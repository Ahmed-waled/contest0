#include <bits\stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>> n;
    int cntNeg = 0, lim = n / 2, ans = 0;
    for(int i = 0, tmp; i < n && cin>> tmp; ++i)
        cntNeg += tmp == -1;
    ans += max(0, cntNeg - lim); // how much we need to erase
    cntNeg = max(0, cntNeg - ans);// remaining negative integers
    cout<<ans + (cntNeg & 1)<<'\n';
}
int main() {
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
