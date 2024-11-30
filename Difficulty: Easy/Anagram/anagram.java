//{ Driver Code Starts
import java.io.*;
import java.lang.*;
import java.util.*;
import java.util.stream.*;

class GFG {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while (t-- > 0) {
            String s1 = br.readLine(); // first string
            String s2 = br.readLine(); // second string

            Solution obj = new Solution();

            if (obj.areAnagrams(s1, s2)) {
                System.out.println("true");
            } else {
                System.out.println("false");
            }
            System.out.println("~");
        }
    }
}
// } Driver Code Ends


class Solution {
    // Function is to check whether two strings are anagram of each other or not.
    public static boolean areAnagrams(String s1, String s2) {

        // Your code here
        
        
        int ss1[]=new int[26];
        int ss2[]=new int[26];
        
         
        for(int i=0;i<s1.length();i++){
            ss1[s1.charAt(i)-97]++;
        }
        for(int i=0;i<s2.length();i++){
            ss2[s2.charAt(i)-97]++;
        }
        int i=0;
       
        while(i<26){
            
            if(ss1[i]!=ss2[i]){
                return false;
            }
            i++;
        }
        
        return true;
    }
}