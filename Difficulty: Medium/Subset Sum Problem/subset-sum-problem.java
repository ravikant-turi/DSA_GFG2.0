//{ Driver Code Starts
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {

            String input_line[] = read.readLine().trim().split("\\s+");
            int N = input_line.length;
            int arr[] = new int[N];
            for (int i = 0; i < N; i++) arr[i] = Integer.parseInt(input_line[i]);
            int sum = Integer.parseInt(read.readLine());

            Solution ob = new Solution();
            if (ob.isSubsetSum(arr, sum))
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

    static Boolean isSubsetSum(int arr[], int target) {
        // code here
        return isSubset1(arr,target,arr.length);
    }
    
    
    static Boolean isSubset1(int []arr,int target,int n){
        
        
        // base condition 
       if(target==0){
            return true;
        }
        if(n==0){
            return false;
        }
        
        // if(target==0){
        //     return true;
        // }
        
        if(arr[n-1]<=target){
            
            return isSubset1(arr,target-arr[n-1],n-1)|| isSubset1(arr,target,n-1);
        }
        else{
            return isSubset1(arr,target,n-1);
        }
    }
}