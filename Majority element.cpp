#include <bits/stdc++.h>

int findMajorityElement(int A[], int n)
{
    // Write your code here.
    int max_value = A[0];
    int c = 1;
    for (int i = 1; i < n; i++)
    {
        if (c == 0)
            max_value = A[i];
        if (A[i] == max_value)
            c++;
        else
            c--;
    }
    c = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == max_value)
            c++;
    }
    if (c > n / 2)
        return max_value;
    return -1;
}