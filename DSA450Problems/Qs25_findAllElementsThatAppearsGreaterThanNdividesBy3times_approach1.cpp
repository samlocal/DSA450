#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        set<int> ans;  // Set to store the majority elements

        // Loop through each element in the input array
        for (int i = 0; i < nums.size(); i++) {
            bool alreadyInSet = false;

            // Check if the current element is already in the set
            for (auto it : ans) {
                if (it == nums[i]) {
                    alreadyInSet = true;  // If found, mark as already in set
                    break;  // No need to continue checking the set
                }
            }

            int count = 0;

            // If the element is not in the set, count its occurrences in the array
            if (ans.size() == 0 || !alreadyInSet) {
                for (int j = 0; j < nums.size(); j++) {
                    if (nums[i] == nums[j]) count++;
                }

                // If the count exceeds n/3, add it to the set
                if (count > (nums.size() / 3)) ans.insert(nums[i]);
            }

            // If we've already found 2 majority elements, exit the loop early
            if (ans.size() >= 2) break;
        }

        // Convert the set to a vector for the result
        vector<int> res;
        for (auto it : ans) res.push_back(it);

        return res;  // Return the vector containing the majority elements
    }
};
