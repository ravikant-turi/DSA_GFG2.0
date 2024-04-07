//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
class GfG
{
    public static void main(String args[])
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0)
                {
                    int n = sc.nextInt();
                    int m = sc.nextInt();
                    int a[] = new int[n];
                    int b[] = new int[m];
                    for(int i = 0;i<n;i++)
                        a[i] = sc.nextInt();
                    for(int i = 0;i<m;i++)
                        b[i] = sc.nextInt();    
                    Solution ob = new Solution();
                    System.out.println(ob.maxDotProduct(n, m, a, b));
                }
        }
}    
// } Driver Code Ends


//User function Template for Java

class Solution
{
	public int maxDotProduct(int n, int m, int a[], int b[]) 
	{ 
		// Your code goes here
// 		return recursion(0,0,0,n,m,a,b);


		int dp[][]=new int [n+1][m+1];
        for(int i=0; i<dp.length; i++){
	        for(int j=0; j<dp[0].length; j++) dp[i][j] = -1;
	    }
	    return recursion1(0,0,0,n,m,a,b,dp);
		
	} 
	 public int recursion(int i,int j,int skip,int n ,int m,int a[],int b[]){
	     if(i>=a.length|| j>=b.length){
	         return 0;
	     }
	     int take=0;
	     int notTake=0;
	     take=a[i]*b[j]+recursion(i+1,j+1,skip,n,m,a,b);
	     if(skip<n-m){
	         notTake=0+recursion(i+1,j,skip+1,n,m,a,b);
	         
	        
	     }
	     
	     return Math.max(take,notTake);
	 }
	  public int recursion1(int i,int j,int skip,int n ,int m,int a[],int b[],int dp[][]){
	     if(i>=a.length|| j>=b.length){
	         return 0;
	     }
	     int take=0;
	     int notTake=0;
	     
	     if(dp[i][j]!=-1){
	         return dp[i][j];
	     }
	     take=a[i]*b[j]+recursion1(i+1,j+1,skip,n,m,a,b,dp);
	     if(skip<n-m){
	         notTake=0+recursion1(i+1,j,skip+1,n,m,a,b,dp);
	     }
	      return dp[i][j]=Math.max(take,notTake);
	 }
}
