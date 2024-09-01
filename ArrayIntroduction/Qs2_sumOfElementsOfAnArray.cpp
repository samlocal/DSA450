//question link
// https://www.geeksforgeeks.org/problems/sum-of-array2326/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function to return sum of elements
    int sum(vector<int>& arr) {
        int sum=0;
        
        //adding all the elements of array to sum
        for(int i=0;i<arr.size();i++) sum=sum+arr[i];
        
        return sum;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        int ans = ob.sum(nums); // Pass the vector nums to the sum function
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends