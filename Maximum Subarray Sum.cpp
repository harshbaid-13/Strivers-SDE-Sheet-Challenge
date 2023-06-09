#include <bits/stdc++.h>
long long maxSubarraySum(int A[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long ans = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        if (sum < 0)
            sum = 0;
        ans = max(sum, ans);
    }
    return ans;
}