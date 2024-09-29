//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        // code here
        
        
        
        int ans=0;
        
        for(int i=0;i<arr.size();i++){
            
            int count=0;
            
            if(arr[i]<=k){
                count++;
            }
            
            else{
                
               count=arr[i]/k;
               if(arr[i]%k!=0){
                    count+=1;
                }
                
            }
            ans+=count;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.totalCount(k, arr);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends