//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int sum=0;
        int maxlen=0;
        int n=N;
        map<int,int>presumMap;
        for(int i=0;i<n;i++){
            sum=sum+A[i];
            if(sum==K){
                maxlen=max(maxlen,i+1);
            }
            int rem=sum-K;
            if(presumMap.find(rem)!=presumMap.end()){
                maxlen=max(maxlen,i-presumMap[rem]);
            }
            if(presumMap.find(sum)==presumMap.end()){
                presumMap[sum]=i;
            }
        }
        return maxlen;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends