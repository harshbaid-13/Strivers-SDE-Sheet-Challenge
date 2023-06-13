#include <bits/stdc++.h>
int findMinimumCoins(int amount)
{
    // Write your code here
    int ans = 0;
    int A[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 9; i++)
    {
        int x = amount / A[i];
        ans += x;
        amount -= (x * A[i]);
    }
    return ans;
}
