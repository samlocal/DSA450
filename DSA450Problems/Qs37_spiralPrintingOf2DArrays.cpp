//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        vector<int>ans;
        
        int rows=matrix.size();
        int columns=matrix[0].size();
        
        int startingRow=0;
        int endingCol=columns-1;
        int endingRow=rows-1;
        int startingCol=0;
        
        int count=0;
        int total=rows*columns;
        
        while(count<total)
        {
            //printing starting row
            for(int index=startingCol;count<total &&index<=endingCol;index++)
            {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            
            //printing ending Column
            for(int index=startingRow;count<total && index<=endingRow;index++)
            {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            
            //printing ending row
            for(int index=endingCol;count<total && index>=startingCol;index--)
            {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            
            //printing starting col
            for(int index=endingRow;count<total &&index>=startingRow;index--)
            {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends