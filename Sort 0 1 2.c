#include <bits/stdc++.h>
void sort012(int *A, int n)
{
    //   Write your code here
    int z = 0, o = 0, t = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 0)
            z++;
        else if (A[i] == 1)
            o++;
        else
            t++;
    }
    for (int i = 0; i < z; i++)
        A[i] = 0;
    for (int i = z; i < z + o; i++)
        A[i] = 1;
    for (int i = z + o; i < n; i++)
        A[i] = 2;
}