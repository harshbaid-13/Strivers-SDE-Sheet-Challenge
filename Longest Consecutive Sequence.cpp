#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &A, int n)
{
    // Write your code here.
    sort(A.begin(), A.end());
    int ans = 0;
    int num_c = 1;
    for (int i = 1; i < n; i++)
    {
        if (A[i] == A[i - 1])
            continue;
        else if (A[i] == A[i - 1] + 1)
            num_c++;
        else
        {
            ans = max(ans, num_c);
            num_c = 1;
        }
    }
    ans = max(ans, num_c);
    return ans;
}