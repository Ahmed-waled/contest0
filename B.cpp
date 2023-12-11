#include<bits\stdc++.h>
using namespace std;
void solve(){
    int n, sumEven = 0, sumOdd = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int tmp;
        cin>> tmp;
        tmp & 1 ? sumOdd += tmp: sumEven += tmp;
    }
    cout<<(sumOdd < sumEven ? "YES\n" : "NO\n");
}
int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}