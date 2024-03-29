//{ Driver Code Starts
//Initial Template for Java
import java.util.stream.Collectors; 
import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine().trim());
        while (tc-- > 0) {
            String[] inputLine;
            int n = Integer.parseInt(br.readLine().trim());
            int[] arr = new int[n];
            inputLine = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }

            int ans = new Solution().print2largest(arr, n);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution {
    int print2largest(int arr[], int n) {
        // code here
          // code here
        int m1=arr[0];
        int res=1;
       int m2=0;
        for(int i=1;i<n;i++){
            if(arr[i]>m1){
                m2=m1;
                m1=arr[i];
            }
            else if(m2<arr[i] && arr[i]<m1 )
            {
                m2=arr[i];
            }
             if(arr[i-1]==arr[i])
            {
                res++;
            }
            
        }
       if(res==n){return -1;}
        return m2;
    }
}