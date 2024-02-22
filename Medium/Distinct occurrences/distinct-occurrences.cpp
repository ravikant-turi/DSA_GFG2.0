//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    public:
     int dp[1001][1001];
     const int mod=1e9+7;
     int solve(int i,int j,string s, string t){
         
         if(i==s.length()){
             if(j==t.length()){
             return 1;
         }
             return 0;
         }
         if(j==t.length()){
             return 1;
         }
         if(dp[i][j]!=-1){
             return dp[i][j];
         }
         int notTake=solve(i+1,j,s,t);
         int take=0;
         if(s[i]==t[j]){
             
         take=solve(i+1,j+1,s,t);
         }
         
         
         return  dp[i][j]=(take+notTake)%mod;;
         
     }
    int subsequenceCount(string s, string t)
    {
      //Your code here
    //   string temp;
      memset(dp,-1,sizeof(dp));
      return solve(0,0,s,t);
   
    
    }
};
 


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends