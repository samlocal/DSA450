//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(vector<int> arr1, vector<int> arr2) {
        
        //Approach1-Using Frequency
        
        
        int maxElement=INT_MIN;
        
        for(int i=0;i<arr1.size();i++)
        {
            if(arr1[i]>maxElement) maxElement=arr1[i];
        }
        
        for(int i=0;i<arr2.size();i++)
        {
            if(arr2[i]>maxElement) maxElement=arr2[i];
        }
        
        vector<int>freqArr(maxElement+1,0);
        
        for(int i=0;i<arr1.size();i++) freqArr[arr1[i]]++;
        
        for(int i=0;i<arr2.size();i++) freqArr[arr2[i]]++;
        
        int count=0;
        
        for(int i=0;i<maxElement+1;i++)
        {
            if(freqArr[i]>0) count++;
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after reading t

    while (t--) {
        vector<int> a;
        vector<int> b;

        string input;
        // For a
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // For b
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        cout << ob.doUnion(a, b) << endl;
    }

    return 0;
}
// } Driver Code Ends