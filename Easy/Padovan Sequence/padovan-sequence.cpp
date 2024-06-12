//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    long long m=1000000007;
    int solve(int n){
        if(n==0 || n==1 || n==2){
            return 1;
        }
        return solve(n-2)+solve(n-3);
    }
    int padovanSequence(int n)
    {
       //code here
    //   return solve(n);
       long long m=1000000007;
       if(n==0 || n==1 || n==2){
            return 1;
        }
        int a=1;
        int b=1;
        int c=1;
      for(int i=3;i<=n;i++){
         
         int temp=a%m+b%m;
         a=b%m;
         b=c%m;
         c=temp%m;
          
      }
      return c%m;
    }
    
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout<<ob.padovanSequence(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends