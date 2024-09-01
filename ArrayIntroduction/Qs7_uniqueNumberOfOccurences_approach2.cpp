//question lik
// https://leetcode.com/problems/unique-number-of-occurrences/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;

        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }

        vector<int>occurences;

        for(auto i:mp)
        {
            occurences.push_back(i.second);
        }
         
         
        sort(occurences.begin(),occurences.end());
        for(int i=1;i<occurences.size();i++)
        {
            if(occurences[i]==occurences[i-1]) return false;
        }

        return true;

    }
};