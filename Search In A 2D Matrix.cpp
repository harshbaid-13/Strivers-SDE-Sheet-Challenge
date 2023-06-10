#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> &A, int target)
{
    int n = A.size();
    int m = A[0].size();
    for (int i = 0; i < n; i++)
    {
        if (A[i][m - 1] >= target)
        {
            for (int j = 0; j < m; j++)
            {
                if (A[i][j] == target)
                    return true;
            }
            break;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (A[n - 1][i] >= target)
        {
            for (int j = 0; j < n; j++)
            {
                if (A[j][i] == target)
                    return true;
            }
            break;
        }
    }
    return false;
}