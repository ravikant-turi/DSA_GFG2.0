//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
   int dp[1100];
   bool fun(int ind,string &s,map<string,int>&mpp){
        int n=s.size();
        
        if(ind==n) return true;
        
        if(dp[ind]!=-1){
            return true;
        }
        
        for(int l=1;l<=n;l++){
            string sub=s.substr(ind,l);
            
            if(mpp.find(sub)!=mpp.end() &&  fun(ind+l,s,mpp)){
                         return dp[ind]=true;
            }
        }
        
        return dp[ind]=false;
        
    }
    int wordBreak(string A, vector<string> &B) {
        //code here
        map<string,int>mpp;
        int n=B.size();
        for(int i=0;i<n;i++) mpp[B[i]]++;
        memset(dp,-1,sizeof(dp));
        return fun(0,A,mpp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends