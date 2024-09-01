//question link
// https://www.naukri.com/code360/problems/duplicate-in-array_893397

#include<bits/stdc++.h>
int findDuplicate(vector<int> &arr) 
{
    // Approach 1

    /*
    sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i]==arr[i+1]) return arr[i];
    }
    */

    //Approach 2
    /*
    int ans=0;

    for(int i=0;i<arr.size();i++) ans^=arr[i];

    for(int i=1;i<arr.size();i++) ans^=i;

    return ans;
    */
	
}
