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
namespace LeetCode 
{
    vector<int> vecInt(string str) { /* [-1,2,-3,404,5] */ vector<int> ans; /* Striping [] */ str.erase(str.begin()); str.pop_back(); istringstream in(str); string temp; while (getline(in, temp, ',')) { ans.push_back(stoi(temp)); } return ans; }
    vector<char> vecChar(string str) { /* ['a','b','c','d'] */ vector<char> ans; /* Striping [] */ str.erase(str.begin()); str.pop_back(); istringstream in(str); string temp; while (getline(in, temp, ',')) { ans.push_back(temp[1]); } return ans; }
    vector<string> vecString(string str) { /* ["abc","def","ghi"] */ vector<string> ans; /* Striping [] */ str.erase(str.begin()); str.pop_back(); istringstream in(str); string temp; while (getline(in, temp, ',')) { ans.push_back(temp.substr(1, temp.size() - 2)); } return ans; }
    vector<vector<int>> vecVecInt(string str) { /* [[1,2,3,4],[10,20,30,40,50],[-1,-2,0]] */ vector<vector<int>> ans; /* Striping [] */ istringstream in(str); string temp; while (getline(in, temp, ']')) { if (temp.empty()) break; /* Striping [ or , */ temp.erase(temp.begin()); temp.push_back(']'); ans.push_back(vecInt(temp)); } return ans; }
    vector<vector<char>> vecVecChar(string str) { /* [['a','b','c'],['x','y','z']] */ vector<vector<char>> ans; /* Striping [] */ istringstream in(str); string temp; while (getline(in, temp, ']')) { if (temp.empty()) break; /* Striping [ or , */ temp.erase(temp.begin()); temp.push_back(']'); ans.push_back(vecChar(temp)); } return ans; }
    vector<vector<string>> vecVecString(string str) { /* [["c++","java"],["python","javascript"]] */ vector<vector<string>> ans; /* Striping [] */ istringstream in(str); string temp; while (getline(in, temp, ']')) { if (temp.empty()) break; /* Striping [ or , */ temp.erase(temp.begin()); temp.push_back(']'); ans.push_back(vecString(temp)); } return ans; }
}
int FAST_IO = [] {ios_base::sync_with_stdio(0); cin.tie(0); return 1; }();
/* clang-format on */

/* This is where I write my solutions for leetcode */
class Solution
{
};

signed main()
{
    int T = 1;
    cin >> T;
    using namespace LeetCode;
    for (int t = 1; t <= T; t++)
    {
        Solution ob;

        string str;
        cin >> str;
        // auto vI = vecInt(str);
        // auto vC = vecChar(str);
        // auto vS = vecString(str);
        // auto vvI = vecVecInt(str);
        // auto vvC = vecVecChar(str);
        // auto vvS = vecVecString(str);

        /* OUTPUT */
        cerr << "\n______Test : " << t << "\n\n";
        // auto ans = ob.CHANGE_ME();
        // print(ans);
    }
    return 0;
}