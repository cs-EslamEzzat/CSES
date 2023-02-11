#include<bits/stdc++.h>
 
#define ll long long
using namespace std;
 
void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
ll prime(ll x) {
    if (x == 2)
        return true;
    if (x < 2 || x % 2 == 0)
        return false;
    for (ll i = 3; i * i <= x; i += 2)
        if (x % i == 0)
            return false;
    return true;
}
 
ll gcd(ll a, ll b) {
    if (!b)
        return a;
    return gcd(b, a % b);
}
 
ll fact(ll x) {
    if (x < 2)
        return x;
    return x * fact(x - 1);
}
 
int main() {
    fast();
    ll a;
    cin >> a;
    cout << 0 << "\n";
    for (ll i = 2; i <= a; i++) {
        cout << i * i * (i * i - 1) / 2 - (4 * (i - 2) * (i - 1)) << "\n";
    }
}