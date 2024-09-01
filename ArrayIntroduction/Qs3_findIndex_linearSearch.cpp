
//question link:
// https://www.geeksforgeeks.org/problems/find-index4752/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findIndex(vector<int>& arr, int key) {
        vector<int>ans(2,-1);
        
        //finding the first time appearence of key
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==key)
            {
                ans[0]=i;
                break;
            }
        }
        
        //finding the last time appearence of key - approach 1
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==key)
            {
                ans[1]=i;
            }
        }
        
        ////finding the last time appearence of key - approach 2
        /*
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(arr[i]==key)
            {
                ans[1]=i;
                break;
            }
        }
        */
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> res;
        vector<int> arr;
        string s;
        getline(cin, s);
        stringstream ss(s);
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        int key;
        cin >> key;
        cin.ignore();
        Solution ob;
        res = ob.findIndex(arr, key);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << "\n";
    }

    return 0;
}

// } Driver Code Ends