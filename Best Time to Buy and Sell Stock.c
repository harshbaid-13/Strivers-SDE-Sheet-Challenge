#include <bits/stdc++.h>
int maximumProfit(vector<int> &A)
{
    // Write your code here.
    int n = A.size();
    int ans = 0;
    int buy, sell;
    buy = A[0], sell = A[1];
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, sell - buy);
        if (buy > A[i - 1])
        {
            buy = A[i - 1];
            sell = A[i];
        }
        if (A[i] > sell)
            sell = A[i];
    }
    ans = max(ans, sell - buy);
    return ans;
}