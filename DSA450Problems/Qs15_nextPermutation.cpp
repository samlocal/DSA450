#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    // Helper function to reverse the elements in the array from index 'start' to 'end'
    void reverse(vector<int>& arr, int start, int end) {
        int i = start;
        int j = end;

        // Reverse the subarray by swapping elements from both ends
        while (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int breakPoint = -1;

        // Step 1: Find the first index 'breakPoint' where nums[i] < nums[i+1] from right to left
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                breakPoint = i;
                break;
            }
        }

        // Step 2: If no such breakPoint is found, reverse the entire array (i.e., the array is the last permutation)
        if (breakPoint == -1) {
            reverse(nums, 0, n - 1);
            return;
        }

        // Step 3: Find the smallest element in the right subarray that is greater than nums[breakPoint]
        int slightGreaterIndex;
        for (int i = n - 1; i > breakPoint; i--) {
            if (nums[i] > nums[breakPoint]) {
                slightGreaterIndex = i;
                break;
            }
        }

        // Step 4: Swap the element at breakPoint with this smallest greater element
        swap(nums[slightGreaterIndex], nums[breakPoint]);

        // Step 5: Reverse the subarray to the right of breakPoint to get the next smallest lexicographical permutation
        reverse(nums, breakPoint + 1, n - 1);
    }
};
