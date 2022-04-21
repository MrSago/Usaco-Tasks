
/*
    author: MrS4g0
    created: 02.04.2022 10:27:27
*/

#include <bits/stdc++.h>
using namespace std;

#define nl ('\n')

using i64 = long long;
using ui64 = unsigned long long;
using ld = long double;

using i128 = __int128;
using ui128 = unsigned __int128;
inline i128 iget() { i64 x; cin >> x; return static_cast<i128>(x); }
inline ui128 uiget() { ui64 x; cin >> x; return static_cast<ui128>(x); }

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


int res[] = {
    1,
    11,
    20,
    102,
    111,
    120,
    201,
    210,
    300,
    1003,
    1012,
    1021,
    1030,
    1102,
    1111,
    1120,
    1201,
    1210,
    1300,
    2002,
    2011,
    2020,
    2101,
    2110,
    2200,
    3001,
    3010,
    3100,
    4000,
    10004,
    10013,
    10022,
    10031,
    10040,
    10103,
    10112,
    10121,
    10130,
    10202,
    10211,
    10220,
    10301,
    10310,
    10400,
    11003,
    11012,
    11021,
    11030,
    11102,
    11111,
    11120,
    11201,
    11210,
    11300,
    12002,
    12011,
    12020,
    12101,
    12110,
    12200,
    13001,
    13010,
    13100,
    14000,
    20003,
    20012,
    20021,
    20030,
    20102,
    20111,
    20120,
    20201,
    20210,
    20300,
    21002,
    21011,
    21020,
    21101,
    21110,
    21200,
    22001,
    22010,
    22100,
    23000,
    30002,
    30011,
    30020,
    30101,
    30110,
    30200,
    31001,
    31010,
    31100,
    32000,
    40001,
    40010,
    40100,
    41000,
    50000,
    100005,
    100014,
    100023,
    100032,
    100041,
    100050,
    100104,
    100113,
    100122,
    100131,
    100140,
    100203,
    100212,
    100221,
    100230,
    100302,
    100311,
    100320,
    100401,
    100410,
    100500,
    101004,
    101013,
    101022,
    101031,
    101040,
    101103,
    101112,
    101121,
    101130,
    101202,
    101211,
    101220,
    101301,
    101310,
    101400,
    102003,
    102012,
    102021,
    102030,
    102102,
    102111,
    102120,
    102201,
    102210,
    102300,
    103002,
    103011,
    103020,
    103101,
    103110,
    103200,
    104001,
    104010,
    104100,
    105000,
    110004,
    110013,
    110022,
    110031,
    110040,
    110103,
    110112,
    110121,
    110130,
    110202,
    110211,
    110220,
    110301,
    110310,
    110400,
    111003,
    111012,
    111021,
    111030,
    111102,
    111111,
    111120,
    111201,
    111210,
    111300,
    112002,
    112011,
    112020,
    112101,
    112110,
    112200,
    113001,
    113010,
    113100,
    114000,
    120003,
    120012,
    120021,
    120030,
    120102,
    120111,
    120120,
    120201,
    120210,
    120300
};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = nxt();
    for (int i = 0; i < n; ++i) {
        cout << res[i] << nl;
    }

    return 0;
}

