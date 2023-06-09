#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &A, int n, int m)
{
    // Write your code here
    if (m == 1 or n == 1)
        return;
    int temp;
    int i = 0;
    int curr, prev;
    while (i < min(n / 2, m / 2))
    {
        for (int j = i; j < m - i; j++)
        {
            if (i == 0 and j == 0)
            {
                prev = A[i][j];
                continue;
            }
            curr = A[i][j];
            A[i][j] = prev;
            prev = curr;
        }
        for (int j = i + 1; j < n - i; j++)
        {
            curr = A[j][m - i - 1];
            A[j][m - i - 1] = prev;
            prev = curr;
        }
        for (int j = m - i - 2; j >= i; j--)
        {
            curr = A[n - i - 1][j];
            A[n - i - 1][j] = prev;
            prev = curr;
        }
        // cout << "prev = " << prev << endl;
        for (int j = n - i - 2; j >= i; j--)
        {
            curr = A[j][i];
            A[j][i] = prev;
            prev = curr;
        }
        // return;
        i++;
    }
}