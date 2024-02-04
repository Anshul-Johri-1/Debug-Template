#include <bits/stdc++.h>
using namespace std;

#define debug(...)
#define debugArr(arr, n)

signed main()
{
    /* Primitive */
    int int_ = 10;
    long long longlong_ = 10;
    double double_ = 3.14;
    char char_ = 'A';
    bool bool_ = true;

    /* STL */
    string string_ = "Hello World!";
    bitset<8> bitset_(100);
    pair<int, string> pair_int_string{1, "CodeForces"};
    tuple<char, int, string> tuple_{'X', 5, "Hello"};
    vector<int> vectorInt = {1, 2, 3, 4, 5};
    set<int> setInt{1, 2, 3, 4};
    map<string, int> map_String_Int = {{"apple", 5}, {"banana", 3}, {"orange", 7}};
    stack<int> st;
    queue<int> q;
    priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq2;
    deque<int> dq;

    /* Arrays */
    int arrInt[] = {1, 2, 3, 4};
    bool arrBool[]{true, true, false, false, true};
    vector<int> arrVector[] = {{1, 2, 3}, {4, 5, 6}};

    /* Matrix */
    int matInt[][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    bool matBool[][5]{{1, 1, 0, 0, 1}, {1, 1, 0, 0, 1}, {1, 1, 0, 0, 1}, {1, 1, 0, 0, 1}};
    vector<vector<int>> vectorVectorInt = {{1, 2, 3, 4, 5}, {10, 20, 30}};
    vector<vector<bool>> vectorVectorBool{{1, 1, 0, 0, 1}, {1, 1, 0, 0, 1}, {1, 1, 0, 0, 1}, {1, 1, 0, 0, 1}};

    /* Decayed Arrays */
    int n = 5;
    int arrTemp[n]{1, 2, 3, 4};
    int *decayArr = arrTemp;

    /* Nested */
    vector<bitset<8>> vectorBitVar{bitset<8>(213), bitset<8>(535)};
    vector<string> vectorString{"CodeForces", "LeetCode"};
    map<string, vector<unordered_map<int, char>>> nested1;

    /* Rvalue */
    auto fun = []()
    { return true; };

    /******************************************/

    /* Primitive */
    debug(int_);
    debug(longlong_);
    debug(double_);
    debug(char_);
    debug(bool_);

    debug(int_, longlong_, double_, char_, bool_);

    /* STL */
    debug(string_);
    debug(bitset_);
    debug(pair_int_string);
    debug(tuple_);
    debug(vectorInt);
    debug(setInt);
    debug(map_String_Int);
    debug(st);
    debug(q);
    debug(pq);
    debug(pq2);
    debug(dq);

    debug(string_, bitset_, pair_int_string, tuple_, vectorInt, setInt, map_String_Int, st, q, pq, pq2, dq);

    /* Arrays */
    debug(arrInt);
    debug(arrBool);
    debug(arrVector);

    debug(arrInt, arrBool, arrVector);

    /* Matrices */
    debug(matInt, matBool, vectorVectorInt, vectorVectorBool);

    /* Decayed Array */
    debugArr(decayArr, n);

    /* Nested */
    debug(vectorBitVar);
    debug(vectorString);
    debug(nested1);

    debug(vectorBitVar, vectorString, nested1);

    /* Rvalue */
    debug(fun());
}