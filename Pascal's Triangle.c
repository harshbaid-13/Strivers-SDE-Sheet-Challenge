#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> ans;
  for(int i=1;i<=n;i++)
  {
    vector<long long int> A(i);
    A[0]=1;
    A[i-1]=1;
    for(int j=1;j<i-1;j++)
    {
      A[j]=ans[i-2][j-1]+ans[i-2][j];
    }
    ans.push_back(A);
  }
  return ans;

}
