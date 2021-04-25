/*------------------------------------
Author : Vibhu Gautam 
Date = 24/04/2021
Time = 10:59:10
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

// map(f, L) -- given a function f and a list L returns a list M such that the 
// ith element of M is f(e), where e is the ith element of L.

template <typename Function> auto MAP(Function function, auto const &inputs)
{
    using value_type = decltype(inputs.front());
    using function_return_type = result_of_t<Function(value_type)>;
    auto results = vector<decay_t<function_return_type>>{};
    results.reserve(inputs.size());
    for (auto const &input : inputs)
        results.push_back(invoke(function, input));
    return results;
}
ll f(ll x)
{
    return x + 4 * x;
}
 
void solve()
{
    vector<ll> a = {1, 2, 3, 4, 5};
    
    auto v = MAP(f, a);

    for (ll e : v)
        cout << e << ' ';
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