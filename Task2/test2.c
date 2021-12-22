#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define fast_ios ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define file_in freopen("input.txt", "r", stdin);
#define file_out freopen("output.txt", "w", stdout);
#define el "\n"
#define cin(v) for(auto &it : (v)) cin >> it;
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
const ld MOD = 1000000007, E = 2.718281828459045, PI = acos(-1);

void fast(){
#ifndef ONLINE_JUDGE
    file_in
    file_out
#endif
    fast_ios
}

int main(){
    fast();
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int cnt = count(all(s), 'N');
        if(cnt == 1) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
