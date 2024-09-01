//question link
// https://leetcode.com/problems/find-the-duplicate-number/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Approach1 - Using sorting
        
        /*
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1]){
                ans=nums[i];
                break;
            }
        }
        return ans;
        */


        //Approach 2 - Using Frequency array

        /*
        int maxElement=INT_MIN;
        int ans=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxElement) maxElement=nums[i];
        }

        vector<int>freqArray(maxElement+1,0);

        for(int i=0;i<nums.size();i++)
        {
            freqArray[nums[i]]++;
        }

        for(int i=0;i<freqArray.size();i++)
        {
            if(freqArray[i]>1) ans= i;
        }
         
         return ans;
         */

         //Approach 3
         
         /*
         int ans=0;
         for(int i=0;i<nums.size();i++)
         {
            int index=abs(nums[i])-1;

            if(nums[index]<0) ans= abs(nums[i]);

            nums[index]=-nums[index];
         }
         return ans;
         */

         
    }
};