#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>


using namespace __gnu_pbds;

// for ordered_set(policy based data structure)
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define faster_ayman    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int             long long
#define pb              push_back
#define rep(i, a, b)    for (auto i = a; i < b; i++)
#define all(a)          (a).begin(), (a).end()
#define testcase        int tt;cin >> tt;while (tt--)
#define inf             1e18
#define _               << ' ' <<


typedef vector<int>                         vi;
typedef vector<pair<int,int>>               vp;
typedef vector<double>                      vd;
typedef vector<char>                        vc;
typedef set<int>                            si;
typedef set<char>                           sc;
typedef unordered_set<int>                  usi;

void solve() {
    int n;              cin >> n;
    rep (i, 1, n + 1) {
        int tot = i * i;
        int tot_combination = ((tot * tot) - tot) >> 1;   // --> nC2
        int attacks2by3 = (i - 1) * (i - 2) * 2;
        int attacks3by2 = (i - 2) * (i - 1) * 2;
        int tot_attack = attacks2by3 + attacks3by2;
        cout << tot_combination - tot_attack << '\n';
    }
}

signed main() {
    
    faster_ayman
    solve();
    
    return 0;
}
        
