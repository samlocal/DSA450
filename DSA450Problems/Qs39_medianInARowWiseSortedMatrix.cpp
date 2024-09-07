//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function template for C++

class Solution {   
    private:
    
    // This function implements the "upperBound" logic.
    // It finds the first element in a sorted row that is greater than 'x'.
    // It returns the count of elements less than or equal to 'x'.
    int upperBound(vector<int> &row, int x, int C) {
        int low = 0;
        int high = C;

        // Binary search to find the upper bound
        while (low < high) {
            int mid = low + (high - low) / 2;

            if (row[mid] <= x) {
                // If the mid element is less than or equal to 'x', move to the right half
                low = mid + 1;
            } else {
                // If the mid element is greater than 'x', move to the left half
                high = mid;
            }
        }

        // The position 'low' is the count of elements <= 'x'
        return low;
    }

    // This function counts how many elements in the matrix are less than or equal to 'x'
    int blackBox(vector<vector<int>> &matrix, int R, int C, int x) {
        int count = 0;

        // Iterate over each row and count elements less than or equal to 'x'
        for (int i = 0; i < R; i++) {
            count += upperBound(matrix[i], x, C);
        }

        return count;
    }

public:
    // This function finds the median of the matrix
    int median(vector<vector<int>> &matrix, int R, int C) {
        // Initialize 'low' to the smallest element and 'high' to the largest element in the matrix
        int low = INT_MAX;
        int high = INT_MIN;
        
        // Find the smallest element in the matrix
        for (int i = 0; i < R; i++) {
            if (matrix[i][0] < low) low = matrix[i][0];
        }
        
        // Find the largest element in the matrix
        for (int i = 0; i < R; i++) {
            if (matrix[i][C-1] > high) high = matrix[i][C-1];
        }
        
        // Perform binary search between 'low' and 'high'
        while (low <= high) {
            // Calculate the mid-point of the current range
            int mid = (low + high) / 2;
            
            // Count how many elements are less than or equal to 'mid'
            int smallerEquals = blackBox(matrix, R, C, mid);
            
            // If the count is less than or equal to half the total elements, search in the right half
            if (smallerEquals <= (R * C) / 2) {
                low = mid + 1;
            } else {
                // Otherwise, search in the left half
                high = mid - 1;
            }
        }

        // 'low' is the median of the matrix
        return low;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int r, c;
        cin >> r >> c; // Input the number of rows and columns in the matrix
        vector<vector<int>> matrix(r, vector<int>(c)); // Create a 2D vector (matrix)
        
        // Input the elements of the matrix
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                cin >> matrix[i][j];
            }
        }
        
        // Create an object of the Solution class
        Solution obj;
        int ans = -1;

        // Find the median of the matrix
        ans = obj.median(matrix, r, c);

        // Output the result
        cout << ans << "\n";        
    }
    return 0;
}
// } Driver Code Ends
