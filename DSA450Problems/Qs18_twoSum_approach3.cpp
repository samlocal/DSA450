#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            int more=target-nums[i];

            if(mp.find(more)!=mp.end())
            {
                return {mp[more],i};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};