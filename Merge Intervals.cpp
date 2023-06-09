#include <bits/stdc++.h>
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &A)
{
    // Write your code here.
    vector<vector<int>> ans;
    int n = A.size();
    sort(A.begin(), A.end());
    int s = A[0][0], e = A[0][1];
    for (int i = 1; i < n; i++)
    {
        if (A[i][0] <= e)
        {
            e = max(e, A[i][1]);
        }
        else
        {
            ans.push_back({s, e});
            s = A[i][0];
            e = A[i][1];
        }
    }
    ans.push_back({s, e});
    return ans;
}
