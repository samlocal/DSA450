// C++ Code to find Median of two Sorted Arrays of 
// Same Size using Merge of Merge Sort

#include <bits/stdc++.h>
using namespace std;

// Function to find the median of two sorted arrays 
// of equal size
float getMedian(vector<int>& arr1, vector<int>& arr2) {
      
      int n = arr1.size();
    int i = 0, j = 0;
    int count;
  
    // m1 to store element at index n of merged array
    // m2 to store element at index (n - 1) of merged array
    int m1 = -1, m2 = -1;

    // Loop till n
    for (count = 0; count <= n; count++) {
        m2 = m1;
      
        // If both the arrays have remaining elements
        if (i < n && j < n) {
            if (arr1[i] > arr2[j])
                m1 = arr2[j++];
            else
                m1 = arr1[i++];
        }
        
          // If only arr1 has remaining elements
        else if (i < n)
            m1 = arr1[i++];
          
        // If only arr2 has remaining elements
        else 
            m1 = arr2[j++];
    }

    return (m1 + m2) / 2.0;
}

int main() {
    vector<int> arr1 = { 1, 12, 15, 26, 38 };
    vector<int> arr2 = { 2, 13, 17, 30, 45 };

    cout << getMedian(arr1, arr2) << endl;
    return 0;
}
