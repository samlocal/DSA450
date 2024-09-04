#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = (nums.size() / 3) + 1;  // Threshold for an element to be considered a majority element
        vector<int> ans;  // Vector to store the result
        map<int, int> freq;  // Map to store the frequency of each element in the array

        // Loop through each element in the input array
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;  // Increment the frequency count for the current element

            // If the frequency of the current element reaches the threshold 'n'
            if (freq[nums[i]] == n) {
                ans.push_back(nums[i]);  // Add the element to the result vector

                // Optional: Remove this element from the map to prevent adding it again
                // This ensures that an element is added to 'ans' only once
                freq[nums[i]] = -nums.size();  // Effectively prevent this element from being counted further
            }
        }

        return ans;  // Return the vector containing the majority elements
    }
};
