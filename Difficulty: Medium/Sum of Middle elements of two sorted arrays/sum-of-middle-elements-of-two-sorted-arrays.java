//{ Driver Code Starts
// Initial Template for Java

import java.util.*;


// } Driver Code Ends
// User function Template for Java

class Solution {
    public int SumofMiddleElements(int[] arr1, int[] arr2) {
        // code here
        
        int n=arr1.length;
        int m=n;
        
        int mid=n;
        
        int i=0;
        
        int j=0;
        
        int sum=0;
        
        int cnt=0;
        
        while(i<m && j<n){
            
            if(arr1[i]<=arr2[j]){
                 
                 cnt++;
                 
                 if(cnt==mid){
                     sum=arr1[i];
                 }
                 if(cnt==mid+1){
                     sum+=arr1[i];
                     return sum;
                 }
                i++;
                
            }
            else{
                
                cnt++;
                if(cnt==mid){
                    sum+=arr2[j];
                }
                if(cnt==mid+1){
                    sum+=arr2[j];
                    return sum;
                }
                j++;
                
                
            }
        }
        return sum;
        
    }
}

//{ Driver Code Starts.
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine(); // Consume newline
        while (t-- > 0) {
            String[] input1 = sc.nextLine().split(" ");
            int[] arr = new int[input1.length];
            for (int i = 0; i < input1.length; i++) {
                arr[i] = Integer.parseInt(input1[i]);
            }

            String[] input2 = sc.nextLine().split(" ");
            int[] brr = new int[input2.length];
            for (int i = 0; i < input2.length; i++) {
                brr[i] = Integer.parseInt(input2[i]);
            }

            Solution ob = new Solution();
            int res = ob.SumofMiddleElements(arr, brr);
            System.out.println(res);
        }
    }
}

// } Driver Code Ends