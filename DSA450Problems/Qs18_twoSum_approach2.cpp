//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        vector<vector<int>> ans;
        
        // Step 1: Sort the array to apply the two-pointer technique
        sort(arr.begin(), arr.end());
        
        int left = 0;
        int right = arr.size() - 1;
        
        // Step 2: Use two pointers to find pairs that sum up to zero
        while (left < right) {
            int sum = arr[left] + arr[right];
            
            if (sum < 0) {
                // If sum is less than 0, move the left pointer to the right to increase the sum
                left++;
            } else if (sum > 0) {
                // If sum is greater than 0, move the right pointer to the left to decrease the sum
                right--;
            } else {
                // Found a pair that sums to 0
                ans.push_back({arr[left], arr[right]});
                
                int currLeft = arr[left];
                int currRight = arr[right];
                
                // Move left pointer to the right, skipping over duplicates
                while (left < right && arr[left] == currLeft) left++;
                
                // Move right pointer to the left, skipping over duplicates
                while (left < right && arr[right] == currRight) right--;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
// Back-end complete function Template for C++

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution obj;
        vector<vector<int>> res = obj.getPairs(arr);
       
