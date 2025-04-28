//{ Driver Code Starts
import java.io.*;
import java.util.*;

class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine().trim()); // Read number of test cases

        while (t-- > 0) {
            String line = read.readLine().trim(); // Read the array input
            String[] numsStr = line.split(" ");   // Split the input string by spaces
            int[] nums =
                new int[numsStr.length]; // Convert string array to integer array
            for (int i = 0; i < numsStr.length; i++) {
                nums[i] = Integer.parseInt(numsStr[i]);
            }

            int k = Integer.parseInt(read.readLine().trim()); // Read target sum

            Solution ob = new Solution();
            int ans = ob.longestSubarray(nums, k); // Call the function and store result
            System.out.println(ans);
            System.out.println("~");
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {
    public int longestSubarray(int[] A, int K) {
        
        // code here
         HashMap<Integer,Integer> map=new HashMap<>();
         int N=A.length;
        int sum=0;
        int ansLength=0;
        
        for(int i=0;i<N;i++){
            sum+=A[i];
            if(sum==K){
                ansLength=i+1;
            }
            if(map.containsKey(sum-K)){
                int res=map.get(sum-K);
                int len=i-res;
                if(ansLength<len){
                    ansLength=len;
                }
                
            }
            if(map.containsKey(sum)==false)
            map.put(sum,i);
        }
        return ansLength;
    //     HashMap<Integer,Integer> mp=new HashMap();
        
    //   int ans=0;
    //   int sum=0;
    //   for(int i=0;i<arr.length;i++){
           
    //       sum+=arr[i];
           
    //       if(sum-k==0){
    //           ans=Math.max(ans,i+1);
    //       }
    //       if(mp.containsKey(sum-k)){
    //           ans=Math.max(ans,mp.get(sum-k));
    //       }
           
    //       if(mp.containsKey(sum)==false){
    //           mp.put(sum,i);
    //       }
    //   }
    //   return ans;
        
        
        
        
        
    }
}
