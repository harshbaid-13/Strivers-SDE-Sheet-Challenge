#include <bits/stdc++.h>

string fourSum(vector<int> A, int target, int n) {
    // Write your code here.
    sort(A.begin(),A.end());
    for(int l=0;l<n;l++)
    {
        for(int k=l+1;k<n;k++)
        {
            int t = target-A[l]-A[k];
            int i=k+1,j=A.size()-1;
            while(i<j)
            {
                if(A[i]+A[j]==t)
                {
                    return "Yes";
                }
                else if(A[i]+A[j]>t)
                    j--;
                else
                    i++;
            }
        }
    }    
    return "No";
}
