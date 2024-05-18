//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
     int sovle(vector<int>&arr,int s,int e){
         
         
         int mid=(s+e)/2;
         while(s<e){
             
             if(arr[mid]< arr[mid+1]){
                s=mid+1; 
             }
             else{
                 e=mid;
             }
             mid=(s+e)/2;
         }
         return arr[s];
         
         
     }
    int findPeakElement(vector<int>& a) 
    {
        // Code here.
        return sovle(a,0,a.size()-1);
    }
};



//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}


// } Driver Code Ends