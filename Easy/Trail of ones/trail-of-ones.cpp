//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int numberOfConsecutiveOnes(int n) {
        // code here
        vector<int> dp(n+1, 0);
        
        dp[0] = 0;
        dp[1] = 0;
        dp[2] = 1;
        
        if (n < 3) {
            return dp[n];
        }
        
        int a=0;
        int b=1;
        
        for (int i = 3; i <= n; i++) {
            
            int c=(a+b)%1000000007;
            
            dp[i] =(dp[i - 1] * 2)%1000000007+(c)%1000000007;
            
         
            dp[i]=dp[i]%1000000007;
               
            a=b;
            b=c;
        }
        return dp[n];
    }
};

// concept;

// n=1  0*2+0=0

// n=2   0*2+1=1

// n=3  1*2+1  = 3

// n=4   3*2+2  = 8

// n=5   8*2+3 = 19

// n=6  19*2+5 = 43

// n=7  43*2+8 = 94

// n=8  94*2+13  = 201

// ........aso

// 0+1+1+2+3+5+8+13..... is fibonacci series

// and rest is maths

// curr_ans=prev_ans*2+fib();

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.numberOfConsecutiveOnes(N) << endl;
    }
    return 0;
}

// } Driver Code Ends