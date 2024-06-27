//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int maxAns=A[0];
    	int minAns=A[0];
    	
    	for(int i=1;i<N;i++){
    	    if(maxAns<A[i]){
    	        maxAns=A[i];
    	    }
    	    else if(minAns>A[i]){
    	      minAns=  A[i];
    	    }
    	}
    	return minAns+maxAns;
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
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends