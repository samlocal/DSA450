//questio link
// https://www.geeksforgeeks.org/problems/reverse-sub-array5620/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> reverseSubArray(vector<int> &arr, int l, int r) {
        int start=l-1;
        int end=r-1;
        
        while(start<=end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        
        return arr;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ls;
        getline(cin, ls);
        int l = stoi(ls);
        string rs;
        getline(cin, rs);
        int r = stoi(rs);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.reverseSubArray(arr, l, r);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends