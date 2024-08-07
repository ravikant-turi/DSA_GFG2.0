//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.lang.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            int k = Integer.parseInt(br.readLine().trim());

            String[] line1 = br.readLine().trim().split(" ");
            int[] arr1 = new int[line1.length];
            for (int i = 0; i < line1.length; i++) {
                arr1[i] = Integer.parseInt(line1[i]);
            }

            String[] line2 = br.readLine().trim().split(" ");
            int[] arr2 = new int[line2.length];
            for (int i = 0; i < line2.length; i++) {
                arr2[i] = Integer.parseInt(line2[i]);
            }

            Solution ob = new Solution();
            System.out.println(ob.kthElement(k, arr1, arr2));
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {
    public long kthElement(int n, int arr1[], int arr2[]) {
        // code here
        
        
        
        
        int []arr=new int[arr1.length+arr2.length];
        
        int i=0;
        int j=0;
        int k=0;
        while(i<arr1.length && j<arr2.length){
            
            if(arr1[i]==arr2[j]){
                arr[k++]=arr1[i++];
                arr[k++]=arr2[j++];
            }
            else if(arr1[i]>arr2[j]){
                
                arr[k++]=arr2[j++]; 
            }
            else {
                arr[k++]=arr1[i++];
            }
        
        
        }
    
         while(i<arr1.length){
            arr[k++]=arr1[i++];
         }
        while(j<arr2.length){
             arr[k++]=arr2[j++];
        }
     
    return arr[n-1];
    }
}