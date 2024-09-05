//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        
    double ans;
    vector<int> mergedArr;
    
    int i = 0;
    int j = 0;
    
    // Merging the arrays
    while (i < array1.size() && j < array2.size())
    {
        if (array1[i] > array2[j])
        {
            mergedArr.push_back(array2[j]);
            j++;
        }
        else
        {
            mergedArr.push_back(array1[i]);
            i++;
        }
    }
    
    // Append remaining elements from array1
    while (i < array1.size())
    {
        mergedArr.push_back(array1[i]);
        i++;
    }
    
    // Append remaining elements from array2
    while (j < array2.size())
    {
        mergedArr.push_back(array2[j]);
        j++;
    }
    
    // Calculate the median
    int n = mergedArr.size();
    if (n % 2 == 0)
    {
        ans = (mergedArr[n/2] + mergedArr[(n/2) - 1]) / 2.0;  // Cast to double for correct division
    }
    else
    {
        ans = mergedArr[n/2];  // Direct middle element if odd number of elements
    }
    
    return ans;
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends