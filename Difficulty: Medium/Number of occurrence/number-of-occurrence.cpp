//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		
	 int findFirstOccurence(int arr[],int s,int e,int x){
        int mid=0;
        int ans=-1;
        while(s<=e){
            mid=s+(e-s)/2;
            if(arr[mid]==x){
                ans=mid;
                e=mid-1;
            }
            else if (arr[mid]<x){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
   }
   int findLastOccurence(int arr[],int s,int e,int x){
      int mid=0;
        int ans=-1;
        while(s<=e){
            mid=s+(e-s)/2;
            if(arr[mid]==x){
                ans=mid;
                s=mid+1;
            }
            else if (arr[mid]<x){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans; 
   }
	int count(int nums[], int n, int target) {
	    // code here
	    int first=findFirstOccurence(nums,0,n-1,target);
        int last=findLastOccurence(nums,0,n-1,target);
        if(first==-1){
            return 0;
        }
        
        return last-first+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends