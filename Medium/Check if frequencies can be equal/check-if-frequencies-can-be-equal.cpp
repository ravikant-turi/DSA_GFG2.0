//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	    unordered_map<char, int> freqMap;
    for (char c : s) {
        freqMap[c]++;
    }

    // Find max and min frequencies
    int maxFreqValue = INT_MIN;
    int minFreqValue = INT_MAX;
    int maxFreqCounter = 0;
    int oneCounter = 0;

    for (const auto& entry : freqMap) {
        if (entry.second == maxFreqValue) {
            maxFreqCounter++;
        }
        if (entry.second > maxFreqValue) {
            maxFreqValue = entry.second;
            maxFreqCounter = 1;
        }
        if (entry.second < minFreqValue) {
            minFreqValue = entry.second;
        }
        
        if(entry.second == 1)
            oneCounter++;
    }
               

    // Check if constraints are satisfied
    if (maxFreqValue - minFreqValue == 0) { //ALL ELEMENTS ARE EQUAL
        return true;
    } else if (maxFreqValue - minFreqValue == 1) { //MAX FREQUENCY IS ONE GREATER THAN MIN FREQUENCEY
        if (maxFreqCounter == 1) {
            return true;
        }else if(maxFreqValue == 2 && oneCounter == 1){//HANDLE {2, 2, 1} CASE
            return true;
        } else {
            return false;
        }
    } else if(oneCounter == 1 && maxFreqValue == s.size() - 1){//all elements except one are equal and the different element has value 1
        return true;
    }else {
        return false;
    }
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends