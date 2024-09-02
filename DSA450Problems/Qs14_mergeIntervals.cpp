#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;

        vector<int>first=intervals[0];

        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=first[1])
            {
                first[1]=max(first[1],intervals[i][1]);
            }
            else{
                ans.push_back(first);
                first=intervals[i];
            }
        }
        ans.push_back(first);
        return ans;
    }
};