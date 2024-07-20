//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    
	    // Code here.
	    
	     long long int low=1,high=m;
        while(low<=high){
            long long int mid= (low+high)/2;
            long long int res=1;
            
            for(int i=1;i<=n;i++){
                res*=mid;
                if(res>m) break;
            }
            
            if(res==m) {
                return mid;
            }
            else if(res<m){
                low=mid+1;
            }
            else{
                high= mid-1;
            }
        }
        return -1;
	    
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends