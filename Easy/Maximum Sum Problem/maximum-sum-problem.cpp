//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int solve(int n){
            if(n==1 ||n==0){
                return n;
            }
            int a=solve(n/2);
            int b=solve(n/3);
            int c=solve(n/4);
            
            return max(n,(a+b+c));
        }
        int maxSum(int n)
        {
            //code here.
            return solve(n);
            
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
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends