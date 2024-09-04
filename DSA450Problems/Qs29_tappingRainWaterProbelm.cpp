//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
 
    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        int prefixMax[n];
        int suffixMax[n];
        
        prefixMax[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            prefixMax[i]=max(prefixMax[i-1],arr[i]);
        }
        
        suffixMax[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suffixMax[i]=max(suffixMax[i+1],arr[i]);
        }
        
        
        long long totalWater=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<prefixMax[i] && arr[i]<suffixMax[i])
            {
                totalWater+=min(prefixMax[i],suffixMax[i])-arr[i];
            }
        }
        return totalWater;
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends