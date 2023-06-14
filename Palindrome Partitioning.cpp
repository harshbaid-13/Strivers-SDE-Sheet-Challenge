#include <bits/stdc++.h>
bool isPal(int i, int j, string s)
{
    while (i <= j)
    {
        if (s[i++] != s[j--])
            return false;
    }
    return true;
}
void solve(vector<vector<string>> &ans, vector<string> &X, string &s, int n, int ind)
{
    if (ind == n)
    {
        ans.push_back(X);
        return;
    }
    for (int i = ind; i < n; i++)
    {
        if (isPal(ind, i, s))
        {
            X.push_back(s.substr(ind, i - ind + 1));
            solve(ans, X, s, n, i + 1);
            X.pop_back();
        }
    }
}
vector<vector<string>> partition(string &s)
{
    // Write your code here.
    vector<vector<string>> ans;
    vector<string> X;
    solve(ans, X, s, s.size(), 0);
    return ans;
}