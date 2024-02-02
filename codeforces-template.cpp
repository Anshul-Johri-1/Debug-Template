#include <bits/stdc++.h>
using namespace std;

/* clang-format off */
namespace _DEBUG_UTIL_ { void print(const char *x) {} void print(bool x) { cerr << (x ? "T" : "F"); } void print(char x) { cerr << '\'' << x << '\''; } void print(signed short int x) { cerr << x; } void print(unsigned short int x) { cerr << x; } void print(signed int x) { cerr << x; } void print(unsigned int x) { cerr << x; } void print(signed long int x) { cerr << x; } void print(unsigned long int x) { cerr << x; } void print(signed long long int x) { cerr << x; } void print(unsigned long long int x) { cerr << x; } void print(float x) { cerr << x; } void print(double x) { cerr << x; } void print(long double x) { cerr << x; } void print(string x) { cerr << '\"' << x << '\"'; } template <size_t N> void print(bitset<N> x) { cerr << x; } void print(vector<bool> x) { int f = 0; cerr << '{'; for (bool i : x) { cerr << (f++ ? "," : ""); cerr << (i ? "T" : "F"); } cerr << "}"; } /* Template Datatypes Declarations */ template <typename T> void print(T x); template <typename T> void print(vector<vector<T>> mat); template <typename T, size_t N> void print(T (&arr)[N]); template <typename T, size_t N, size_t M> void print(T (&mat)[N][M]); template <typename F, typename S> void print(pair<F, S> x); template <typename T> void print(priority_queue<T> pq); template <typename T> void print(priority_queue<T, vector<T>, greater<T>> pq); template <typename T> void print(stack<T> st); template <typename T> void print(queue<T> q); /* Template Datatypes Definitions */ template <typename T> void print(T x) { int f = 0; cerr << '{'; for (auto i : x) cerr << (f++ ? "," : ""), print(i); cerr << "}"; } template <typename T> void print(vector<vector<T>> mat) { int f = 0; cerr << "{\n"; for (auto i : mat) cerr << (f++ ? ",\n" : ""), print(i); cerr << "}\n"; } template <typename T, size_t N> void print(T (&arr)[N]) { int f = 0; cerr << '{'; for (auto &i : arr) cerr << (f++ ? "," : ""), print(i); cerr << "}"; } template <typename T, size_t N, size_t M> void print(T (&mat)[N][M]) { int f = 0; cerr << "{\n"; for (auto &i : mat) cerr << (f++ ? ",\n" : ""), print(i); cerr << "}\n"; } template <typename F, typename S> void print(pair<F, S> x) { cerr << '('; print(x.first); cerr << ','; print(x.second); cerr << ')'; } template <typename T> void print(priority_queue<T> pq) { int f = 0; cerr << '{'; while (!pq.empty()) cerr << (f++ ? "," : ""), print(pq.top()), pq.pop(); cerr << "}"; } template <typename T> void print(priority_queue<T, vector<T>, greater<T>> pq) { int f = 0; cerr << '{'; while (!pq.empty()) cerr << (f++ ? "," : ""), print(pq.top()), pq.pop(); cerr << "}"; } template <typename T> void print(stack<T> st) { int f = 0; cerr << '{'; while (!st.empty()) cerr << (f++ ? "," : ""), print(st.top()), st.pop(); cerr << "}"; } template <typename T> void print(queue<T> q) { int f = 0; cerr << '{'; while (!q.empty()) cerr << (f++ ? "," : ""), print(q.front()), q.pop(); cerr << "}"; } /* Printer */ template <typename T> void printer(const char *name, T &&head) { cerr << name << " = "; print(head); cerr << "]\n"; } template <typename T, typename... V> void printer(const char *names, T &&head, V &&...tail) { int bracket = 0, i = 0; while (names[i] != ',' or bracket != 0) { if (names[i] == '(') bracket++; else if (names[i] == ')') bracket--; i++; } cerr.write(names, i) << " = "; print(head); cerr << " ||"; printer(names + i + 1, tail...); } /* PrinterArr */ template <typename T> void printerArr(const char *name, T arr[], int N) { cerr << name << " : {"; for (int i = 0; i < N; i++) { cerr << (i ? "," : ""), print(arr[i]); } cerr << "}]\n"; } }
#ifndef ONLINE_JUDGE
#define debug(...) cerr << __LINE__ << ": [", _DEBUG_UTIL_::printer(#__VA_ARGS__, __VA_ARGS__) 
#define debugArr(arr, n) cerr << __LINE__ << ": [", _DEBUG_UTIL_::printerArr(#arr, arr, n) 
#else
#define debug(x...)
#define debugArr(arr, n)
#endif
void print() { cout << endl; } template <typename T, typename... V> void print(vector<T> vec, V... tail); template <typename T, typename... V> void print(T x, V... tail) { cout << x << ' '; print(tail...); } template <typename T, typename... V> void print(vector<T> vec, V... tail) { for (auto i : vec) cout << i << ' '; print(tail...); }
#define endl '\n'
#define all(x) x.begin(), x.end()
using ll = long long;
using ld = long double;
const double EPS = 1e-9;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const int MAXN = 1e5 + 10;
int FAST_IO = [] {ios_base::sync_with_stdio(0); cin.tie(0); return 1; }();
/* clang-format on */

void solve();
signed main()
{
    int T = 1;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
#ifndef ONLINE_JUDGE
        cerr << "\n______Test : " << t << "\n\n";
#endif
        solve();
    }
#ifndef ONLINE_JUDGE
    cerr << "\nDone!";
#endif
    return 0;
}

void solve()
{
    /* This is where I start my code on CodeForces */
}