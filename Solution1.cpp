class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        //unordered hash set  to store row and col indices of zero values in matrix
        unordered_set<int> row;
        unordered_set<int> col;
        
        //iterate through the matrix to store row and col indices of zero values in matrix
        for(long rowIdx = 0;rowIdx < matrix.size(); rowIdx++)
        {
            for(long colIdx = 0;colIdx < matrix[rowIdx].size();colIdx++)
            {
                if(matrix[rowIdx][colIdx] == 0)
                {
                    row.insert(rowIdx);
                    col.insert(colIdx);
                }
            }
        }
        
        // make all the elements of matrix zero whoes indices are present in hash-sets row or col
        for(long rowIdx = 0;rowIdx < matrix.size(); rowIdx++)
        {
            for(long colIdx = 0;colIdx < matrix[rowIdx].size();colIdx++)
            {
                if(row.find(rowIdx) != row.end() || col.find(colIdx) != col.end())
                {
                    matrix[rowIdx][colIdx] = 0;
                }
            }
        }
        
    }
};
