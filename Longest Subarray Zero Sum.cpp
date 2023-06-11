#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector<int> A)
{

    // Write your code here
    int n = A.size();
    unordered_map<int, int> M;
    int sum = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        if (sum == 0)
            ans = i + 1;
        else
        {
            if (M[sum])
                ans = max(ans, i - M[sum]);
            else
                M[sum] = i;
        }
    }
    return ans;
}