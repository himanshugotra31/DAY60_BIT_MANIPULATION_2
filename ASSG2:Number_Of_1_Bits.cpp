int Solution::numSetBits(int A) 
{
    int temp=A;
    int count=0;
    while(temp>1)
    {
        temp=temp&(temp-1);
        count++;
    }
    return count;
}
//T.C. for this code will be number of set bits you have
//refer page 58-61, notebook 4
//we have done 3 approaches, read all the approaches, all of them are important