#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &A)
{
	// Write your code here.
	vector<int> R(A.size()), C(A[0].size());
	for(int i=0;i<A.size();i++)
	{
		for(int j=0;j<A[i].size();j++)
		{
			if(A[i][j]==0)
			{
				R[i]=1;
				C[j]=1;
			}
		}
	}
	for(int i=0;i<A.size();i++)
	{
		for(int j=0;j<A[i].size();j++)
		{
			if(R[i])
				A[i][j]=0;
			if(C[j])
				A[i][j]=0;
		}
	}
}