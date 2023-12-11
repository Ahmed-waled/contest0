#include<bits\stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
int const N = 2e5 + 10;
int n, k, arr[N];
void func(int cnt, int &ind){
    for(int i = 1; i <= n; ++i) {
        if (arr[i] == arr[1])
            ++cnt;
        if (cnt == k) {
            ind = i;
            break;
        }
    }
}
void solve(){
    cin >> n >> k;
    for(int i = 1; i <= n; ++i)
        cin>> arr[i];
    int firstInd = -1, cntFirst = 0, secondInd = -1, cntSecond = 0;
    for(int i = 1; i <= n; ++i) {
        if (arr[i] == arr[1])
            ++cntFirst;
        if (cntFirst == k) {
            firstInd = i;
            break;
        }
    }
    for(int i = n; i >= 1; --i) {
        if (arr[i] == arr[n])
            ++cntSecond;
        if (cntSecond == k) {
            secondInd = i;
            break;
        }
    }
    if(firstInd != -1 && secondInd != -1 && (arr[1] == arr[n] || firstInd < secondInd)) {
        cout << "YES\n";
    }
    else
        cout<<"NO\n";
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