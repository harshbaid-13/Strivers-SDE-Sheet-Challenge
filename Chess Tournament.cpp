#include <bits/stdc++.h>
int solve(vector<int> A, int n, int x)
{
    int ans = 1, last = A[0];
    for (int i = 1; i < n; i++)
    {
        if (A[i] - last >= x)
        {
            ans++;
            last = A[i];
        }
    }
    return ans;
}
int chessTournament(vector<int> A, int n, int c)
{
    // Write your code here
    sort(A.begin(), A.end());
    int ans = A[n - 1] - A[0];
    int l = 0, u = A[n - 1] - A[0], mid;
    while (l <= u)
    {
        mid = (l + u) / 2;
        int x = solve(A, n, mid);
        if (x < c)
        {
            u = mid - 1;
        }
        else
        {
            l = mid + 1;
            ans = mid;
        }
    }
    return ans;
}