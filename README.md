# Ultimate C++ Debug Template
Frustrated with keeping track of variables in different functions? Say goodbye to the hassle with our easy-to-use template! <br> It's designed to handle all data types, making it simple to see variable statuses throughout your program.

## Usage 
```c++
vector<int> v;
for (int i = 1; i <= 3; i++)
{
    v.push_back(i*i);
    debug(i, v);
}

// Output :
23: [i = 1 || v = {1}]
23: [i = 2 || v = {1,4}]
23: [i = 3 || v = {1,4,9}]
```
This template supports datatypes such as:

- Primitive: `int`, `char`, `bool`, `long long int` etc.
- STL: `pair`, `tuple`, `vector`, `set`, `map`, `stack`, `queue`, `priority_queue`, `bitset` etc.
- Arrays of all datatypes: `int arr[]`, `bool arr[]`, `vector<int> adj[]` etc.
- Matrix: `int mat[100][200]`, `vector<vector<bool>> vis(100, vector<bool> (200, 0))` etc.
- Decayed Arrays / Matrices.
- Rvalue Literals like `"Hello"`, `false`, `'z'`, `isSafe(i, j), dfs(u)` etc.  
- Even complicated nested datatypes like: `map<string, vector<pair<char, unordered_set<long long>>>> WHATTT;` etc.

Coloured version of this template is also supported. (Terminal Only)

<img src="colouredTemplate.png">

You can use it on your computer when doing coding challenges on sites like **CodeForces**. <br>
Additionally, you can use it in online coding environments like **LeetCode** for practicing data structures and algorithms.

## How to use it?

Let's say you have different datatypes such as:
```c++
char Char = 'A';
int arr[] = {1, 2, 3, 4};
bitset<8> Bitset(100);
map<string, int> map_String_Int = {{"apple", 5}, {"banana", 3}, {"orange", 7}};
```
You can debug them like this `debug(var1, var2, var3, var4, ...);`
```c++ 
debug(Char, arr, Bitset, map_String_Int);

// Output
21: [Char = 'A' || arr = {1,2,3,4} || Bitset = 01100100 || map_String_Int = {("apple",5),("banana",3),("orange",7)}]
```
In instances where arrays / matrices have decayed into pointers, use `debugArr(arr, n);`

#### Note:

- You don't need to remove `debug(var, ...)` statements in your code when submitting it. <br>
- On platforms like Codeforces, there's a macro called `ONLINE_JUDGE` that's defined, automatically disregarding all your debug statements. This ensures your solution will be accepted unless there's a logical error. <br>
- However, on platforms like LeetCode, `ONLINE_JUDGE` isn't defined. As a result, your solution might exceed the time limit even if it's correct, as these statements still consume time to print. To address this, simply change `#ifndef` to `#ifdef` before submitting, and your solution will be accepted. <br>
- Also, LeetCode supports `cout` instead of `cerr`, so you need to uncomment first line i.e. `#define cerr cout` to get output there.  

## How to Setup?

- Copy this template into your own templates. The output will be directed to the stderr stream.
- Alternatively you can make a separate header file and include this into your template.
  ```c++
  #ifndef ONLINE_JUDGE
  #include "template.cpp"
  #else
  #define debug(...)
  #define debugArr(arr, n)
  #endif
  ```
- When using it for LeetCode uncomment `#define cerr cout` and before submitting change `#ifndef` to `#ifdef` to ignore `debug(...);`. For convenience, after changing it, copy it, and keep it pinned in your clipboard for repetitive use.

**For Complete Beginners who need step by step tutorial (using VS Code), follow these steps:**
<details>
  <summary> <strong> Steps </strong> </summary>
  
  1. Open VS Code
  2. In your workspace, create a file _template.cpp_
  3. Copy content of my _template.cpp_ into your _template.cpp_
  4. Press **Ctrl + Shift + P** to open Command Pallete
  5. Search **Configure User Snippet** and click on _cpp.json_
  6. Now copy the content of my _cpp.json_ into your _cpp.json_ file
  7. Now you have configured your user snippets. Create a _main.cpp_ file and type **wow** and press TAB!!! Magic!!! <br>

  Additionally, you can install `Competitive Programming Helper` extension from VS Code to make your journey easy.

  Now for LeetCode

  1. Uncomment `#define cerr cout` and copy this template
  2. Keep it pinned in your clipboard. If you are using windows, you can press **Win + V** to open clipboard.
  3. When solving DSA problems in LeetCode, paste this above `class Solution` and use debug normally.
  4. Before submitting, change `#ifndef` to `#ifdef` to ignore `debug(...);`.
</details>

<br>

If you feel like template is too long, you can change it to one liner too. If you use _format on save_ , you can take advantage of `/* clang-format off */` to keep it one line.
