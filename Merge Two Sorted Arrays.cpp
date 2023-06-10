#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int> &A1, vector<int> &A2, int m, int n)
{
    // Write your code here.
    int a1 = m - 1, a2 = n - 1;
    for (int i = m + n - 1; i >= 0; i--)
    {
        if (a1 < 0 or a2 < 0)
            break;
        if (A1[a1] > A2[a2])
            A1[i] = A1[a1--];
        else
            A1[i] = A2[a2--];
    }
    if (a2 >= 0)
    {
        for (int i = 0; i <= a2; i++)
            A1[i] = A2[i];
    }
    return A1;
}