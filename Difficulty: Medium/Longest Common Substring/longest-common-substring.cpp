//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int lcsByTopDown(int n, int m, string s1, string s2)
    {
        // your code here
        int dp[n+1][m+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }
         int ans=0;
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                
                if(s1[i-1] == s2[j-1]){
                    dp[i][j]=  1+dp[i-1][j-1];
                    if(dp[i][j] > ans)
                    {
                        ans = dp[i][j];
                    }
                }
                else{
                  dp[i][j]= 0;
                }
      
            }
        }
       return ans;
    }
    int longestCommonSubstr(string str1, string str2) {
        // your code here
        return lcsByTopDown(str1.length(),str2.length(),str1,str2);

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;
    }
}
// } Driver Code Ends