#include <bits/stdc++.h>
string reverseString(string &s)
{
    // Write your code here.
    stack<string> S;
    for (int i = 0; i < s.size(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.size())
        {
            word += s[i];
            i++;
        }
        if (!word.empty())
        {
            S.push(word);
        }
    }
    string ans = "";
    while (!S.empty())
    {
        ans += S.top();
        ans.push_back(' ');
        S.pop();
    }
    return ans;
}