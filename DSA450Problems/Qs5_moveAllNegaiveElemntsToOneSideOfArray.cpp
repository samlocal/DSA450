// https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        
        //Approach1 - order is not preserved
        /*
        int i=0;
        int j=arr.size()-1;
        
        while(i<=j)
        {
            if(arr[i]>0) i++;
            else if(arr[j]<0) j--;
            else {
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
        }
        */
        
        //Approach 2- either positive or negative elements order is preserved
        /*
        int j=0;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>0)
            {
                if(i!=j) swap(arr[i],arr[j]);
                j++;
            }
        }
        */
        
        //Approach 3-order maintained
        vector<int>positiveElements,negativeElements;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<0) negativeElements.push_back(arr[i]);
            else positiveElements.push_back(arr[i]);
        }
        
        for(int i=0;i<positiveElements.size();i++) arr[i]=positiveElements[i];
        
        for(int i=0;i<negativeElements.size();i++) arr[i+positiveElements.size()]=negativeElements[i];
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
        ob.segregateElements(nums);

        for (int x : nums)
            cout << x << " ";
        cout << endl;
    }
}
// } Driver Code Ends