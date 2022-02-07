//APPROACH NUMBER 1
unsigned int Solution::reverse(unsigned int A) 
{
    unsigned int B=A;
    vector<unsigned int> arr(32,0);
    int i=0;
    while(B!=0)
    {
        unsigned int d=B%2;
        arr[32-i-1]=d;
        B=B/2;
        i++;
    }
    unsigned int pow_2=1;
    unsigned int ans=0;
    for(int i=0;i<32;i++)
    {
        ans+=arr[i]*pow_2;
        pow_2*=2;
    }
    return ans;
}
//T.C. for this code is O(1)
//S.C. for this code is O(1)


/* 

APPROACH NUMBER 2:

you can also see this approach it is also a good approach.

unsigned int reverse(unsigned int A) {
    unsigned int rev = 0,m = 31;
    while(A){
        if(A&1)
            rev = rev|1<<m;
        A>>= 1;
        m--;
    }
    return rev;
}

*/