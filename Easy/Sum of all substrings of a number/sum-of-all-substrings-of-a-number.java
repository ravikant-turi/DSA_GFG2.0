//{ Driver Code Starts
//Initial Template for Java

/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;
class GFG {
	public static void main (String[] args) {
	    
	    //taking input using Scanner class
		Scanner sc=new Scanner(System.in);
		
		//taking total testcases
		int t=sc.nextInt();
		sc.nextLine();
		while(t-->0)
		{
		    //taking the String
		    String s=sc.nextLine();
		    Solution ob = new Solution();
		    //calling method sumSubstrings() 
		    System.out.println(ob.sumSubstrings(s));
		}
	}
}
// } Driver Code Ends


//User function Template for Java

class Solution
{
    //Function to find sum of all possible substrings of the given string.
    public static long sumSubstrings(String str)
    {
    //Your code here
     int n = str.length();

        int mod = 1000000007;

        char[] ch = str.toCharArray();

        long dp[] = new long[n];

        dp[0] = (long)Character.getNumericValue(ch[0]);

        for(int i=1; i<n; i++){

            long val = (long)Character.getNumericValue(ch[i]);

            dp[i] = ((i+1)*val+(10*dp[i-1])%mod);

        }

        

        long res = 0;

        for(int i=0; i<n; i++){

            res=(res+dp[i])%mod;

        }

        return res;
    }
}