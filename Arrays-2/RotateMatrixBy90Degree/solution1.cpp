class Solution {
public:
    
    void transposeAndReverse(vector<vector<int>> &matrix)
    {
        //preform matrix transpose
        
        for(int rowIdx = 0;rowIdx < matrix.size();rowIdx++)
        {
            for(int colIdx = rowIdx;colIdx < matrix[rowIdx].size();colIdx++)
            {
                int temp = matrix[rowIdx][colIdx];
                matrix[rowIdx][colIdx] = matrix[colIdx][rowIdx];
                matrix[colIdx][rowIdx] = temp;        
            }
        }
        
        //perform reverse operation on each row
        for(int rowIdx = 0;rowIdx < matrix.size();rowIdx++)
        {
            for(int colIdx = 0;colIdx < matrix[rowIdx].size()/2;colIdx++)
            {
                int temp = matrix[rowIdx][colIdx];
                matrix[rowIdx][colIdx] = matrix[rowIdx][matrix[rowIdx].size()-colIdx-1];
                matrix[rowIdx][matrix[rowIdx].size()-colIdx-1] = temp;
            }
        }
    }
    
    void rotate(vector<vector<int>>& matrix) 
    {
        transposeAndReverse(matrix);
    }
};
