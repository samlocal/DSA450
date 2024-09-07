#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int columns=matrix[0].size();

        int rowIndex=0;
        int colIndex=columns-1;

        while(rowIndex<rows && colIndex>=0)
        {
            int element=matrix[rowIndex][colIndex];

            if(element==target) return true;
            else if(element>target) colIndex--;
            else rowIndex++;
        }
        return false;
    }
};