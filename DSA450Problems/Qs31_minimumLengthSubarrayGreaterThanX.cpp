//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        int start=0;
        int end=0;
        int n=arr.size();
        int sum=0;
        
        int minLength=INT_MAX;
        while(end<n)
        {
            while(sum<=x && end<n)
            {
                sum+=arr[end];
                end++;
            }
            
            while(sum>x && start<n)
            {
                minLength=min(minLength,end-start);
                sum-=arr[start];
                start++;
            }
        }
        if(minLength==INT_MAX) return 0;
        return minLength;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        vector<int> arr;
        int x;

        cin >> x;
        cin.ignore(); // Ignore the newline character after x

        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        cout << obj.smallestSubWithSum(x, arr) << endl;
    }

    return 0;
}
// } Driver Code Ends