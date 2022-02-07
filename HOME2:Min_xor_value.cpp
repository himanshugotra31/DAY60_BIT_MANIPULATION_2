int Solution::findMinXor(vector<int> &A) 
{
     sort(A.begin(), A.end());
     int ans=A[0]^A[1];
     for(int i=1;i<A.size()-1;i++)
     {
        int k=A[i]^A[i+1];
        if(k<ans)
        {
            ans=k;
        }
     }
     return ans;
}
//T.C. for this code is O(N*logN)
//S.C. for this code is O(1)
//Refer page 18-24, Notebook 3
