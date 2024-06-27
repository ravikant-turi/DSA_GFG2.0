//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        // code here 
        
        int i=0;
        int j=0;
        int k=n-1;
        while(j<=k){
         
            if(arr[j]==0)
            {
                swap(arr[i],arr[j]);
                i++;
                j++;
            }
           else if(arr[j]==2){
                swap(arr[j],arr[k]);
                k--;
            }
            else if(arr[j]==1){
               j++;
           }
        
    }
//     class Solution
// {
//     public:
//     void sort012(int a[], int n)
//     {
//         // code here 
//         int low = 0, mid = 0, high = n-1;
//         while(mid <= high){
//             if(a[mid] == 0){
//                 swap(a[low], a[mid]);
//                 low++;
//                 mid++;
//             }
//             else if(a[mid] == 2){
//                 swap(a[mid], a[high]);
//                 high--;
//             }
//             else{
//                 mid++;
//             }
//         }
//     }
    
};
    
  
    
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends