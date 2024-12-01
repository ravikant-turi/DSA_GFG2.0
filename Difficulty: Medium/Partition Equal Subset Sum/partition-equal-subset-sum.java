//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while (t-- > 0) {
            String inputLine[] = br.readLine().trim().split(" ");
            int n = inputLine.length;
            int arr[] = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }

            Solution ob = new Solution();

            if (ob.equalPartition(arr))
                System.out.println("true");
            else
                System.out.println("false");

            System.out.println("~");
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    static boolean equalPartition(int arr[]) {
        // code here
        
        int sum=0;
        int n=arr.length;
        for(int i=0;i<n;i++){
            
            sum+=arr[i];
        }
        
        if(sum%2!=0){
            return false;
        }
        
        sum=sum/2;
        
        
        return solve1(arr,sum,n);
    }
    
    static boolean solve1(int arr[],int sum,int n){
        
        if(sum==0){
            return true;
        }
        if(n==0){
            return false;
        }
        
        if(arr[n-1]<=sum){
            
            return solve1(arr,sum-arr[n-1],n-1) || solve1(arr,sum,n-1);
        }
        
        else{
            return solve1(arr,sum,n-1);
        }
        
    }
}