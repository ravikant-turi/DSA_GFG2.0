//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        // code here
        long long ans=0;
        long long moc=1000000007;
        int c=1;
        for(int i=1;i<=n;i++){
           long long temp=1;
           for(int j=1;j<=i;j++){
              temp=(temp*c)%moc; 
            //   cout<<c;
              c++;
           } 
        //   cout<<"  ";
           ans=(ans+temp)%moc;
        }
        // cout<<"  ";
       return (ans)%moc; 
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends