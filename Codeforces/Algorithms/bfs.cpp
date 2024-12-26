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
#define all(x) x.begin(), x.end()

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


void bfs(int node, vii& graph, vector<bool>& visited){

    queue<int> q;
    q.push(node);
    visited[node] = true;

    while(q.empty() == false){

        int front = q.front();
        q.pop();

        cout << front << " ";

        for(auto i : graph[front]){
            if(visited[i] == false){
                visited[i] = true;
                q.push(i);
            }
        }
    }
    for(auto i: graph[node]){
        if(visited[i] == false){
            bfs(i, graph, visited);
        }
    }

    return;
}

void solve(vii& graph){
   
   int n = graph.size();
   vector<bool> visited(n,false);

   bfs(0,graph,visited);

   REP(i,n){
    if(visited[i] == false){
        bfs(i,graph,visited);
    }
   }

   return;
}
int main() {
    FASTIO;
    
    int n;
    cin >> n;
    vii graph;
    while(n){
        int v;
        cin >> v;
        vi temp(v);
        REP(i,v){
            cin >> temp[i];
        }
        graph.push_back(temp);
        n--;
    }
    solve(graph);

    return 0;
}
