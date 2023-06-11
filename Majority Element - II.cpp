#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &A)
{
    // Write your code here.

    int a = A[0], ac = 1, n = A.size();
    int b = 0, bc = 0;
    for (int i = 1; i < n; i++)
    {
        if (A[i] == a)
        {
            ac++;
        }
        else if (A[i] == b)
        {
            bc++;
        }
        else if (ac == 0)
        {
            a = A[i];
            ac++;
        }
        else if (bc == 0)
        {
            b = A[i];
            bc++;
        }
        else
        {
            ac--;
            bc--;
        }
    }
    ac = 0, bc = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == a)
            ac++;
        else if (A[i] == b)
            bc++;
    }
    vector<int> ans;
    if (ac > n / 3)
        ans.push_back(a);
    if (bc > n / 3)
        ans.push_back(b);
    return ans;
}