#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &A, int n)
{
    //  Write your code here.
    int flag = -1;
    for(int i=n-1;i>0;i--)
    {
        if(A[i]>A[i-1])
        {
            flag = i-1;
            break;
        }
    }
    if(flag==-1)
    {
        reverse(A.begin(),A.end());
        return A;
    }
    int next_val = A[flag+1];
    for(int i=flag+1;i<n;i++)
    {
        if(A[i]>A[flag])
            next_val = min(A[i],next_val);
    }
    int temp = A[flag];
    A[flag]=next_val;
    for(int i=flag+1;i<n;i++)
    {
        if(A[i]==A[flag])
            A[i] = temp;
    }
    sort(A.begin()+flag+1,A.end());
    return A;
}