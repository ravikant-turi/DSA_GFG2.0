//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        int s = 0, e = n - 1, index;
        while(s <= e){
            int mid = s + (e - s) / 2;
            if(arr[mid] >= k){
                index = mid;
                e = mid - 1;
            }
            else
                s = mid + 1;
        }
        if(k > arr[n - 1])
            return arr[n - 1];
        if(index == 0)
            return arr[0];
            
        if((arr[index] - k) > (k - arr[index - 1]))
            return arr[index - 1]; 
        
        return arr[index];
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends