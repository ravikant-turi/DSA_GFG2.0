//{ Driver Code Starts
// Initial Template for Java
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int n = Integer.parseInt(read.readLine());
            Solution ob = new Solution();
            System.out.println(ob.firstElement(n));
        }
    }
}
// } Driver Code Ends


// User function Template for Java
class Solution {
    static int firstElement(int n) {
        // code here
        long mod=1000000007;
        int a=1;
        int b=1;
        int c=1;
        for(int i=2;i<n;i++){
            c=(a+b)%1000000007;
            a=b%1000000007;
            b=c%1000000007;
     
        }
        return b%1000000007;
    }
}