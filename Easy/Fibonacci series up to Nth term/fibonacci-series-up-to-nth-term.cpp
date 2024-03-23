//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
        
        vector<int> ans;
         int mod=(int)(1e9+7);
        int prev1=0;
        int prev2=1;
        ans.push_back(prev1);
        ans.push_back(prev2);
        for(int i=2;i<=n;i++){
            int curr=prev1%mod+prev2%mod;
            prev1=prev2%mod;
            prev2=curr%mod;
            ans.push_back(prev2%mod);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends