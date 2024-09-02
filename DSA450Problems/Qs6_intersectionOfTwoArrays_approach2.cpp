//question link
// https://leetcode.com/problems/intersection-of-two-arrays/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>  ans;
        int n=nums1.size();
        int m=nums2.size();

        int i=0;
        int j=0;

        while(i<n && j<m)
        {
            if(nums1[i]==nums2[j])
            {
                if(ans.size()==0 || ans.back()!=nums1[i])
                {
                    ans.push_back(nums1[i]);
                }
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]) i++;
            else //nums1[i]>nums2[j]
            j++;
        }
        return ans;
    }
};