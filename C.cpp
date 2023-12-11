#include<bits\stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n, freq[26];
string s;
void solve() {
    cin >> n >> s;
    for(int i = 0; i < 26; ++i)
        freq[i] = 0;
    bool YES = true;
    for(int i = 0; i < n; ++i){
        int chr = s[i] - 'a';
        if(freq[chr] && freq[chr] != (i & 1) + 1) {
            cout << "No\n";
            YES = false;
        }
        freq[chr] = (i & 1) + 1;
    }
    if(YES)
        cout<<"YES\n";
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