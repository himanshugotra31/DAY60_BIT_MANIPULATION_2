// Q1. Reverse Bits

// Problem Description

// Reverse the bits of an 32 bit unsigned integer A.


// Problem Constraints

// 0 <= A <= 232


// Input Format

// First and only argument of input contains an integer A.


// Output Format

// Return a single unsigned integer denoting the decimal value of reversed bits.


// Example Input

// Input 1:

//  0

// Input 2:

//  3



// Example Output

// Output 1:

//  0

// Output 2:

//  3221225472



// Example Explanation

// Explanation 1:

//         00000000000000000000000000000000    
// =>      00000000000000000000000000000000

// Explanation 2:

//         00000000000000000000000000000011    
// =>      11000000000000000000000000000000



unsigned int swapBits(unsigned int x, unsigned int i, unsigned int j) {
    unsigned int lo = ((x >> i) & 1);
    unsigned int hi = ((x >> j) & 1);
    if (lo ^ hi) {
        x ^= ((1U << i) | (1U << j));
    }
    return x;
}

unsigned int Solution::reverse(unsigned int x) {
    unsigned int n = sizeof(x) * 8;
    for (unsigned int i = 0; i < n/2; i++) {
        x = swapBits(x, i, n-i-1);
    }
    return x;
}


/*SCALER_APPROACH

Reversing bits could be done by swapping the n/2 least significant bits with its most significant bits.

The trick is to implement a function called swapBits(i, j), which swaps the ‘i’th bit with the ‘j’th bit.

If you still remember how XOR operation works:

0 ^ 0 == 0, 
1 ^ 1 == 0, 
0 ^ 1 == 1, and 
1 ^ 0 == 1.

We only need to perform the swap when the ‘i’th bit and the ‘j’th bit are different.

To test if two bits are different, we could use the XOR operation. Then, we need to toggle both ‘i’th and ‘j’th bits.

We could apply the XOR operation again.

By XOR-ing the ‘i’th and ‘j’th bit with 1, both bits are toggled.

Bonus approach (The divide and conquer approach):

Remember how merge sort works? Let us use an example of n == 8 (one byte) to see how this works:


              01101001

             /        \

           0110       1001

          /   \       /   \

         01    10    10    01

        /\     /\    /\     /\

       0  1   1  0  1  0   0  1

The first step is to swap all odd and even bits. After that swap consecutive pairs of bits, and so on …

Therefore, only a total of log(n) operations are necessary.

Example:

For the first step, you would do:

    x = ((x & 0x55555555) << 1) | ((x & 0xAAAAAAAA) >> 1);

*/