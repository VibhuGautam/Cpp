/*------------------------------------
Author : Vibhu Gautam 
Date = 24/04/2021
Time = 10:57:50
------------------------------------*/
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
const ll MOD = 998244353 , mod = 1e9 + 7;
#define rep(i,a,b) for(ll i = a; i < b; ++i)
#define repr(i,a,b) for(ll i = a; i >= b; --i)
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// compose(g, f) -- returns a function h such that h(x) == g(f(x)).

template <typename Function> auto COMPOSE(Function f, Function g)
{
    return [f, g](auto const &input) { return f(g(input)); };
}
ll a(ll x)
{
    return 2 * x;
}
ll b(ll x)
{
    return 3 * x;
}

void solve()
{
    auto h = COMPOSE(a, b);
    cout << h(2);
}
int main()
{
    fast_cin();
    ll t = 1;
    // cin >> t;
    for(ll it=1;it<=t;it++) {
       solve();
    }
return 0;
}