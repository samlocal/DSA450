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
        int n1=array1.size();
        int n2=array2.size();
        int n=n1+n2;
        
        int index2=n/2;
        int index1=index2-1;
        int i=0;
        int j=0;
        int count=0;
        
        int ele1,ele2;
        
        while(i<n1 && j<n2)
        {
            if(array1[i]<array2[j])
            {
                if(count==index1) ele1=array1[i];
                if(count==index2) ele2=array1[i];
                i++;
                count++;
            }
            else{
                if(count==index1) ele1=array2[j];
                if(count==index2) ele2=array2[j];
                j++;
                count++;
            }
        }
        
        while(i<n1)
        {
            if(count==index1) ele1=array1[i];
                if(count==index2) ele2=array1[i];
                i++;
                count++;
        }
    while(j<n2)
    {
        if(count==index1) ele1=array2[j];
                if(count==index2) ele2=array2[j];
                j++;
                count++;
    }
    double ans;
    if(n%2==0)
    {
        ans=(ele1+ele2)/2.0;
        return ans;
    }
    else{
        ans=ele2;
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