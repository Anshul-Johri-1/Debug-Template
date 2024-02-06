#include <bits/stdc++.h>
using namespace std;

#include "template_cpp20_std.cpp"

signed main()
{
    // Primitives
    int intVar = 42;
    double doubleVar = 3.14;
    char charVar = 'A';
    bool boolVar = true;
    float floatVar = 2.718f;
    long long longVar = 1234567890;
    short shortVar = 32767;
    unsigned int uintVar = 4294967295;
    unsigned long ulongVar = 1844674ull;
    unsigned short ushortVar = 65535;
    long long longlongVar = 9223372036854775807ll;
    unsigned long long ulonglongVar = 18446744073709551615ull;

    debug(intVar);
    debug(doubleVar);
    debug(charVar);
    debug(boolVar);
    debug(floatVar);
    debug(longVar);
    debug(shortVar);
    debug(uintVar);
    debug(ulongVar);
    debug(ushortVar);
    debug(longlongVar);
    debug(ulonglongVar);
    debug(intVar, doubleVar, charVar, boolVar, floatVar, longVar, shortVar, uintVar, ulongVar, ushortVar, longlongVar, ulonglongVar);

    // STLs
    std::string strVar = "Hello, Debug!";
    std::vector<int> vecVar = {1, 2, 3, 4, 5};
    std::vector<bool> vecBoolVar = {0, 1, 0, 1, 0, 1};
    std::array<double, 5> arrVar = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::list<char> lstVar = {'a', 'b', 'c', 'd', 'e'};
    std::set<int> setVar = {1, 2, 3, 4, 5};
    std::map<int, std::string> mapVar = {{1, "one"}, {2, "two"}, {3, "three"}};
    std::deque<float> dequeVar = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    std::unordered_set<int> unorderedSetVar = {1, 2, 3, 4, 5};
    std::unordered_map<int, std::string> unorderedMapVar = {{1, "one"}, {2, "two"}, {3, "three"}};
    std::bitset<8> bitsetVar("10101010");
    std::pair<int, double> pairVar = {42, 3.14};
    std::tuple<int, double, std::string> tupleVar = {42, 3.14, "tuple"};
    std::queue<int> queueVar;
    std::priority_queue<int> priorityQueueVar;
    std::stack<int> stackVar;
    for (int i = 1; i <= 5; ++i)
        queueVar.push(i), priorityQueueVar.push(i), stackVar.push(i);

    debug(strVar);
    debug(vecVar);
    debug(vecBoolVar);
    debug(arrVar);
    debug(lstVar);
    debug(setVar);
    debug(mapVar);
    debug(dequeVar);
    debug(unorderedSetVar);
    debug(unorderedMapVar);
    debug(bitsetVar);
    debug(pairVar);
    debug(tupleVar);
    debug(queueVar);
    debug(priorityQueueVar);
    debug(stackVar);
    debug(strVar, vecVar, vecBoolVar, arrVar, lstVar, setVar, mapVar, dequeVar, unorderedSetVar, unorderedMapVar, bitsetVar, pairVar, tupleVar, queueVar, priorityQueueVar, stackVar);

    // 2D Vectors
    std::vector<std::vector<int>> vecVecVar = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    std::vector<std::vector<bool>> boolVecVecVar = {
        {true, false, true},
        {false, true, false},
        {true, true, false}};
    std::vector<std::vector<std::pair<int, char>>> pairVecVecVar = {
        {{1, 'a'}, {2, 'b'}, {3, 'c'}},
        {{4, 'd'}, {5, 'e'}, {6, 'f'}},
        {{7, 'g'}, {8, 'h'}, {9, 'i'}}};

    debug(vecVecVar);
    debug(boolVecVecVar);
    debug(pairVecVecVar);
    debug(vecVecVar, boolVecVecVar, pairVecVecVar);

    // Vector of STLs
    std::vector<std::deque<char>> vecDequeVar = {{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}};
    std::vector<std::list<int>> vecListVar = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    std::vector<std::set<char>> vecSetVar = {{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}};
    std::vector<std::map<int, std::string>> vecMapVar = {{{1, "one"}, {2, "two"}}, {{3, "three"}, {4, "four"}}};
    std::vector<std::bitset<8>> vecBitsetVar = {std::bitset<8>("10101010"), std::bitset<8>("11001100"), std::bitset<8>("11110000")};

    debug(vecDequeVar);
    debug(vecListVar);
    debug(vecSetVar);
    debug(vecMapVar);
    debug(vecBitsetVar);
    debug(vecDequeVar, vecListVar, vecSetVar, vecMapVar, vecBitsetVar);

    // Array of Primitives
    int intArr[5] = {1, 2, 3, 4, 5};
    double doubleArr[3] = {1.1, 2.2, 3.3};
    char charArr[5] = {'a', 'b', 'c', 'd', 'e'};
    bool boolArr[4] = {true, false, true, false};
    float floatArr[4] = {1.1f, 2.2f, 3.3f, 4.4f};

    debug(intArr);
    debug(doubleArr);
    debug(charArr);
    debug(boolArr);
    debug(floatArr);
    debug(intArr, doubleArr, charArr, boolArr, floatArr);

    // 2D Arrays
    int arrArr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    bool boolArrArr[3][3] = {
        {true, false, true},
        {false, true, false},
        {true, true, false}};

    std::pair<int, char> pairArrArr[3][3] = {
        {{1, 'a'}, {2, 'b'}, {3, 'c'}},
        {{4, 'd'}, {5, 'e'}, {6, 'f'}},
        {{7, 'g'}, {8, 'h'}, {9, 'i'}}};

    debug(arrArr);
    debug(boolArrArr);
    debug(pairArrArr);
    debug(arrArr, boolArrArr, pairArrArr);

    // Array of STLs
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};
    std::vector<int> vec3 = {7, 8, 9};
    std::vector<int> vecArr[3] = {vec1, vec2, vec3};

    std::set<char> set1 = {'a', 'b', 'c'};
    std::set<char> set2 = {'d', 'e', 'f'};
    std::set<char> set3 = {'g', 'h', 'i'};
    std::set<char> setArr[3] = {set1, set2, set3};

    std::map<int, std::string> map1 = {{1, "one"}, {2, "two"}, {3, "three"}};
    std::map<int, std::string> map2 = {{4, "four"}, {5, "five"}, {6, "six"}};
    std::map<int, std::string> map3 = {{7, "seven"}, {8, "eight"}, {9, "nine"}};
    std::map<int, std::string> mapArr[3] = {map1, map2, map3};

    debug(vecArr);
    debug(setArr);
    debug(mapArr);
    debug(vecArr, setArr, mapArr);

    // Arrays declared at runtime, is as good as decayed arrays
    int N = 5;
    int arrRuntime[N] = {1, 2, 3, 4, 5};
    bool boolArrRuntime[N] = {true, false, true, false, true};
    std::pair<int, char> pairArrRuntime[N] = {{1, 'A'}, {2, 'B'}, {3, 'C'}, {4, 'D'}, {5, 'E'}};

    debugArr(arrRuntime, N);
    debugArr(boolArrRuntime, N);
    debugArr(pairArrRuntime, N);
    debugArr(arrRuntime, N, boolArrRuntime, N, pairArrRuntime, N);
}