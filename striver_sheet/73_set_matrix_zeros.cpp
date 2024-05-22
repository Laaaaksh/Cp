#include <bits/stdc++.h>
using namespace std;

// Shortcuts for commonly used data types
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<vector<int>> vii;

// Constants
const int INF = 1e9; // Infinity
const ll LL_INF = 1e18; // Long long infinity
const double EPS = 1e-9; // Epsilon

// Macros for looping
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define REP(i, n) FOR(i, 0, n)
#define RFOR(i, a, b) for (int i = a; i >= b; --i)
#define RREP(i, n) RFOR(i, n, 0)

// Fast I/O methods
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Debugging macros
#define TRACE(x) cerr << #x << " = " << x << endl
#define WATCH(x) { cerr << #x << " = "; _print(x); cerr << endl; }
template<typename T> void _print(const T& t) { cerr << t; }
template<typename T, typename V> void _print(const pair<T, V>& p) { cerr << "{"; _print(p.first); cerr << ", "; _print(p.second); cerr << "}"; }
template<typename T> void _print(const vector<T>& v) { cerr << "[ "; for (const T& i : v) { _print(i); cerr << " "; } cerr << "]"; }

// Utility functions
template<typename T> T gcd(T a, T b) { return b == 0 ? a : gcd(b, a % b); }
template<typename T> T lcm(T a, T b) { return (a / gcd(a, b)) * b; }
template<typename T> bool isPrime(T n) { if (n <= 1) return false; for (T i = 2; i * i <= n; ++i) if (n % i == 0) return false; return true; }

// 1 0 1
// 0 0 1
// 1 1 1
void markZeros(vii &array, int rows, int cols)
{
    int extra_col = 1;
    
    REP(i,rows){
        REP(j, cols){
           if(array[i][j] == 0){
            if(j == 0){
                extra_col = 0;
            }else {
                array[0][j] = 0;
            }
            array[i][0] = 0;
           } 
        } 
    }
    
    FOR(i,1, rows){
        FOR(j,1, cols){
            if(array[i][j]!=0){
                if(array[i][0] == 0 || array[0][j] == 0){
                    array[i][j] = 0;
                }
            }
        }
    }
    
    if(array[0][0] == 0){
        FOR(i,1,cols){
            array[0][i] = 0;
        }
    }
    
    if(extra_col == 0){
        FOR(j,1, rows){
            array[j][0] = 0;
        }
    }
    
    return;
}
int main() {
    FASTIO;

    vii array = {{0,1,1}, {1,0,1}, {1,1,1}};
    int rows = array.size();
    int cols = array[0].size();
    _print(array);
    markZeros(array,rows, cols);
    cout << "\n";
    _print(array);

    return 0;
}
