vector<int> Solution::solve(vector<int> &A)
{
    int hg=0;
    for(int i=0;i<A.size();i++)
    {
        hg=hg^A[i];
    }
    int position=0;
    for(int i=0;i<=30;i++)
    {
        if(hg&(1<<i))
        {
            position=i;
            break;
        }
    }
    int ans1=0;
    int ans2=0;
    for(int i=0;i<A.size();i++)
    {
        if(1&(A[i]>>position))
        {
            ans1=ans1^A[i];
        }
        else
        {
            ans2=ans2^A[i];
        }
    }
    vector<int> fnl;
    if(ans1>ans2)
    {
        fnl.push_back(ans2);
        fnl.push_back(ans1);
    }
    else
    {
         fnl.push_back(ans1);
         fnl.push_back(ans2);
    }
    return fnl;


}
//TC for this code is O(N)
//refer page 62-65, notebook 4
