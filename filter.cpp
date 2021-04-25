/*------------------------------------
Author : Vibhu Gautam 
Date = 24/04/2021
Time = 11:00:10
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
 
// filter(L, P) -- given a list L and a predicate(boolean returning function) P, 
// returns a list containing all and only those elements of L for which P is true.

template <typename Function> auto FILTER(auto const &inputs, Function function)
{
    using value_type = decltype(inputs.front());
    auto results = vector<decay_t<value_type>>{};
    results.reserve(inputs.size());
    for (auto const &input : inputs)
        if (invoke(function, input))
            results.push_back(input);
    return results;
}
bool f(ll x)
{
    return (x < 10 && x > 5);
}
 
void solve()
{
    vector<ll> a = {1, 2, 7, 3, 4, 8, 5, 9, 10, 6, 8};

    auto v = FILTER(a, f);

    for (ll e : v)
        cout << e << ' ';
}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for(ll it=1;it<=t;it++) {
       solve();
    }
return 0;
}