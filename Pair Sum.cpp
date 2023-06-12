#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &A, int s){
   // Write your code here.
   vector<vector<int>> ans;
   int n = A.size();
   sort(A.begin(),A.end());
   unordered_map<int,int> M;
   for(int i=0;i<n;i++)
   {
      if(M[s-A[i]])
      {
         for(int j=0;j<M[s-A[i]];j++)
         {
            ans.push_back({s-A[i],A[i]});
         }
      }
      M[A[i]]++;
   }
   sort(ans.begin(),ans.end());
   return ans;
}