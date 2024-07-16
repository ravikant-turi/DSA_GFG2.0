//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        
        int ans=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            
             if(s[i]==ch && count!=0){
                count--;
             }
             else if(count==0){
                ans=i;
                break;
             }
             
        }
        if(ans==0){
            return "";
        }
        
        return s.substr(ans,n);
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        char ch;
        int count;

        cin >> s >> ch >> count;
        Solution ob;
        cout << ob.printString(s, ch, count) << "\n";
    }

    return 0;
}
// } Driver Code Ends