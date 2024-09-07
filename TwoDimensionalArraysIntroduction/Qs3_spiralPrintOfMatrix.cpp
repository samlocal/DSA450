#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int columns=matrix[0].size();
        vector<int>ans;

        int count=0;
        int total=rows*columns;

        int startingRow=0;
        int endingCol=columns-1;
        int endingRow=rows-1;
        int startingCol=0;

        while(count<total)
        {
            //printing StartingRow
            for(int col=startingCol;count<total && col<=endingCol;col++)
            {
                ans.push_back(matrix[startingRow][col]);
                count++;
            }
            startingRow++;

            //printing EndingColumn
            for(int row=startingRow;count<total &&row<=endingRow;row++)
            {
                ans.push_back(matrix[row][endingCol]);
                count++;
            }
            endingCol--;

            //printing EndingRow
            for(int col=endingCol;count<total &&col>=startingCol;col--)
            {
                ans.push_back(matrix[endingRow][col]);
                count++;
            }
            endingRow--;

            //printing startingCol
            for(int row=endingRow;count<total &&row>=startingRow;row--)
            {
                ans.push_back(matrix[row][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};