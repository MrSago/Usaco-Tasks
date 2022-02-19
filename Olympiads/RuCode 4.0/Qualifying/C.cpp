
/*
    author: MrS4g0
    created: 07.11.2021 18:38:12
*/

#include <bits/stdc++.h>
using namespace std;

#define nl ('\n')

using i64 = long long;
using ui64 = unsigned long long;
using ld = long double;

// using i128 = __int128;
// using ui128 = unsigned __int128;
// inline i128 iget() { i64 x; cin >> x; return (i128)x; }
// inline ui128 uiget() { ui64 x; cin >> x; return (ui128)x; }

using vb = vector<bool>;
using vc = vector<char>;
using vi = vector<int>;
using vi64 = vector<i64>;
using vui64 = vector<ui64>;

using pi = pair<int,int>;
using pi64 = pair<i64,i64>;
using pui64 = pair<ui64,ui64>;
using graph = vector<vi>;

template <typename T = int>
inline T nxt() { T x; cin >> x; return x; }

constexpr int MOD = int(1e9) + 7;
constexpr int NMOD = 998244353;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int D; scanf("%d", &D); getchar();

    stack<int> st;
    multiset<int> s;
    char str[20] = { '\0' };
    for (int i = 0; i < D; ++i) {
        fgets(str, 20, stdin);
        switch (str[1]) {
            case 'u':
                int v; sscanf(str + 5, "%d", &v);
                st.push(v);
                s.insert(v);
            break;

            case 'o':
                s.erase(s.lower_bound(st.top()));
                st.pop();
            break;

            case 'a':
                cout << *s.rbegin() << nl;
            break;
        }
    }

    return 0;
}
