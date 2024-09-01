//question link
// https://leetcode.com/problems/intersection-of-two-arrays/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;

        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    if(ans.size()==0 || ans.back()!=nums1[i]) ans.push_back(nums1[i]);
                    nums2[j]=-1;
                }
            }
        }
        
        return ans;
    }
};