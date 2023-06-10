#include <bits/stdc++.h>
using namespace std;

pair<int, int> missingAndRepeating(vector<int> &A, int n)
{
    // Write your code here
    int a_sum = 0, g_sum = 0, a_sqsum = 0, g_sqsum = 0;
    for (int i = 0; i < A.size(); i++)
    {
        a_sum += (i + 1);
        g_sum += A[i];
        a_sqsum += ((i + 1) * (i + 1));
        g_sqsum += (A[i] * A[i]);
    }
    pair<int, int> ans;
    int aminusp = a_sum - g_sum;
    int aplusp = (a_sqsum - g_sqsum) / aminusp;
    ans.first = (aminusp + aplusp) / 2;
    ans.second = (aplusp - aminusp) / 2;
    return ans;
}
