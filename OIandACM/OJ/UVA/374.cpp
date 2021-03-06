#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 10000007;

ll qpow(ll x, ll n){
    ll ret = 1;
    while (n) {
        if(n & 1)
            ret = ret * x % mod;
        x = x * x % mod;
        n >>= 1;
    }
    return ret;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll T;
    // cin >> T;
    ll a, b, n;
    while (cin >> a >> b >> n){
        mod = n;
        cout << qpow(a, b) << '\n';
    }

    return 0;
}

