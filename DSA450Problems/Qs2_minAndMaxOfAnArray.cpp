
//question link
// https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        pair<long long ,long long>ans;
        
        //storing minimu elemet at pair.first
        ans.first=arr[0];
        
        //storing maximum element at pair.second
        ans.second=arr[0];
        
        for(int i=1;i<arr.size();i++)
        {
            //checking for the minimum element
            if(arr[i]<ans.first) ans.first=arr[i];
            
            //checking for the maximum element
            if(arr[i]>ans.second) ans.second=arr[i];
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<long long int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(arr);
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends