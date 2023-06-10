#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr, int n)
{
    // Write your code here.
    unordered_map<int, int> M;
    for (int i : arr)
    {
        if (M[i])
            return i;
        M[i]++;
    }
    return 69;
}
