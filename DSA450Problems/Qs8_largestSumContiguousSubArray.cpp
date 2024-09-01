//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
   long long maxSubarraySum(vector<int> &arr) {
    long long maxi = LLONG_MIN;  // Initialize maxi to the smallest possible value
    int n = arr.size();
    
    for(int i = 0; i < n; i++) {
        long long sum = 0;
        
        for(int j = i; j < n; j++) {
            sum += arr[j];  // Accumulate sum
            maxi = max(maxi, sum);  // Update maxi if current sum is greater
        }
    }
    return maxi;
}

    
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.maxSubarraySum(arr) << endl;
    }
}
// } Driver Code Ends