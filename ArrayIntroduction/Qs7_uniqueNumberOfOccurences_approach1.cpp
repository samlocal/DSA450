//question lik
// https://leetcode.com/problems/unique-number-of-occurrences/description/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<int>occurences;

        int count=0;

        for(int i=0;i<n;i=i+count)
        {
             count=1;

            int j=i+1;
            while(j<n && arr[j]==arr[i])
            {
                count++;
                j++;
            }

            occurences.push_back(count);
        }
        
        sort(occurences.begin(),occurences.end());
        for(int i=1;i<occurences.size();i++)
        {
            if(occurences[i]==occurences[i-1]) return false;
        }

        return true;
    }
};