//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int>arr1;
        vector<int>arr2;
        
        for(int i=0;i<n;i++){
            //+ve no
            if(arr[i]>=0){
                arr1.push_back(arr[i]);
            }
            // -ve number
            else if(arr[i]<0){
                  arr2.push_back(arr[i]);
            
            }
            
        }
        int k;
        for(k=0;k<arr1.size();k++){
            arr[k]=arr1[k];
        }
        for(int i=0;i<arr2.size();i++){
            arr[k+i]=arr2[i];
        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends