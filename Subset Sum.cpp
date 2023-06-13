#include <bits/stdc++.h> 
void f(vector<int> &ans, vector<int> &A,int n, int i, int sum)
{
    if(i==n)
    return;
    f(ans,A,n,i+1,sum);
    ans.push_back(sum+A[i]);
    f(ans,A,n,i+1,sum+A[i]);
}
vector<int> subsetSum(vector<int> &A)
{
    // Write your code here.
    vector<int> ans;
    ans.push_back(0);
    f(ans,A,A.size(),0,0);
    sort(ans.begin(),ans.end());
    return ans;
}