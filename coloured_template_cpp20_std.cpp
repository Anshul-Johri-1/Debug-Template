#ifndef DEBUG_TEMPLATE_CPP
#define DEBUG_TEMPLATE_CPP
#include <bits/stdc++.h>
// #define cerr cout
namespace __DEBUG_UTIL__
{
    using namespace std;
    bool I_want_colored_output = true; /* ONLY WORKS WITH TERMINAL */
    string white = I_want_colored_output ? "\033[0;m" : "";
    string outer = I_want_colored_output ? "\033[0;31m" : "";    // red
    string varName = I_want_colored_output ? "\033[1;34m" : "";  // blue
    string varValue = I_want_colored_output ? "\033[1;32m" : ""; // green

    template <typename T>
    concept is_iterable = requires(T &&x) { begin(x); end(x); size(x); } &&
                          !is_same_v<remove_cvref_t<T>, string>;
    void print(const char *x) { cerr << x; }
    void print(char x) { cerr << "\'" << x << "\'"; }
    void print(bool x) { cerr << (x ? "T" : "F"); }
    void print(_Bit_reference x) { cerr << (x ? "T" : "F"); }
    void print(string x) { cerr << "\"" << x << "\""; }

    template <typename T>
    void print(T &&x)
    {
        if constexpr (is_iterable<T>) /* Every iterable Ever */
            if (size(x))
                if constexpr (is_iterable<decltype(*(begin(x)))>)
                {
                    int f = 0;
                    cerr << "\n~~~~~\n";
                    for (auto &&i : x)
                    {
                        cerr << setw(2) << left << f++, print(i), cerr << "\n";
                    }
                    cerr << "~~~~~\n";
                }
                else
                {
                    int f = 0;
                    cerr << "{";
                    for (auto &&i : x)
                        cerr << (f++ ? "," : ""), print(i);
                    cerr << "}";
                }
            else
                cerr << "{}";
        else if constexpr (requires(T &&x) { x.pop(); }) /* Stacks, Priority Queues, Queues */
        {
            T temp = x;
            int f = 0;
            cerr << "{";
            if constexpr (requires(T &&x) { x.top(); })
                while (!temp.empty())
                    cerr << (f++ ? "," : ""), print(temp.top()), temp.pop();
            else
                while (!temp.empty())
                    cerr << (f++ ? "," : ""), print(temp.front()), temp.pop();
            cerr << "}";
        }
        else if constexpr (requires(T &&x) { x.first; x.second; }) /* Pair */
        {
            cerr << '(', print(x.first), cerr << ',', print(x.second), cerr << ')';
        }
        else if constexpr (requires(T &&x) { get<0>(x); }) /* Tuple */
        {
            int f = 0;
            cerr << '(', apply([&f](auto... args)
                               { ((cerr << (f++ ? "," : ""), print(args)), ...); },
                               x);
            cerr << ')';
        }
        else
            cerr << x;
    }
    template <typename T, typename... V>
    void printer(const char *names, T &&head, V &&...tail)
    {
        int i = 0;
        for (size_t bracket = 0; names[i] != '\0' and (names[i] != ',' or bracket != 0); i++)
            if (names[i] == '(' or names[i] == '<' or names[i] == '{')
                bracket++;
            else if (names[i] == ')' or names[i] == '>' or names[i] == '}')
                bracket--;
        cerr << varName;
        cerr.write(names, i) << outer << " = " << varValue;
        print(head);
        cerr << outer;
        if constexpr (sizeof...(tail))
            cerr << " ||", printer(names + i + 1, tail...);
        else
            cerr << "]\n"
                 << white;
    }
    template <typename T>
    void printerArr(const char *name, T arr[], size_t N)
    {
        cerr << varName << name << outer << " = " << varValue
             << "{";
        for (size_t i = 0; i < N; i++)
            cerr << (i ? "," : ""), print(arr[i]);
        cerr << "}";
        cerr << outer << "]\n"
             << white;
    }

}
#ifndef ONLINE_JUDGE
#define debug(...) std::cerr << __DEBUG_UTIL__::outer << __LINE__ << ": [", __DEBUG_UTIL__::printer(#__VA_ARGS__, __VA_ARGS__);
#define debugArr(arr, n) std::cerr << __DEBUG_UTIL__::outer << __LINE__ << ": [", __DEBUG_UTIL__::printerArr(#arr, arr, n);
#else
#define debug(...)
#define debugArr(arr, n)
#endif
#endif