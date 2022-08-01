class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {   
        //variable to keep track of 1st column being zero
        bool isCol = false;
        
        //iterate rows 0 to m and cols 0 to n 
        //set isCol true if any of the rows 0th value is zero
        //set the zero flags for i,0 index  and j,0 index with zero , if value at i,j is zero
        for(long rowIdx = 0;rowIdx < matrix.size(); rowIdx++)
        {
            if(matrix[rowIdx][0] == 0)
            {
                isCol = true;
            }
            for(long colIdx = 1;colIdx < matrix[rowIdx].size();colIdx++)
            {
                if(matrix[rowIdx][colIdx] == 0)
                {
                    matrix[0][colIdx] = 0;
                    matrix[rowIdx][0] = 0;
                }
            }
        }
        
        //set zero values as per above logic 
        for(long rowIdx = 1;rowIdx < matrix.size(); rowIdx++)
        {
            for(long colIdx = 1;colIdx < matrix[rowIdx].size();colIdx++)
            {
                if(matrix[rowIdx][0] == 0 || matrix[0][colIdx] == 0)
                {
                    matrix[rowIdx][colIdx] = 0;
                }
            }
        }
        
        //if 0,0 index is 0 then set the 1st row with zero value covering for 0th row as any thing alread zero on zeroth row will set 0,0 index 0 based on above logic
        if(matrix[0][0] == 0)
        {
            for(long rowIdx = 0;rowIdx < matrix[0].size(); rowIdx++)
            {
                matrix[0][rowIdx] = 0;
            }
        }
        
        //set 1st column to zero
        if(isCol == true)
        {
            for(long rowIdx = 0;rowIdx < matrix.size(); rowIdx++)
            {
                matrix[rowIdx][0] = 0;
            }
        }
    
    }
};