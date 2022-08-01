class Solution {
public:
    
    //function to get the values of next row in triangle using pascal rule
    vector<int> generateTriangle(vector<int> prevRow)
    {
        vector<int> curRow;
        curRow.push_back(1);
        for(int i = 1;i<prevRow.size();i++)
        {
            curRow.push_back(prevRow[i-1] + prevRow[i]);
        }
        curRow.push_back(1);
        return curRow;
    }
    
    
    vector<vector<int>> generate(int numRows) 
    {
        //vector initialization
        vector<vector<int>> result;
        vector<int> temp;
        if(numRows == 0)
        {
            return result;
        }
        else if(numRows == 1)
        {
            temp.push_back(1);
            result.push_back(temp);
            temp.clear();
        }
        else if(numRows == 2)
        {
            temp.push_back(1);
            result.push_back(temp);
            temp.clear();
            temp.push_back(1);
            temp.push_back(1);
            result.push_back(temp);
        }
        else
        {
            temp.push_back(1);
            result.push_back(temp);
            temp.clear();
            temp.push_back(1);
            temp.push_back(1);
            result.push_back(temp);
            //iterate through the number of rows to get next rows
            for(int i=2;i<numRows;i++)
            {
                result.push_back(generateTriangle(result[i-1]));
            }
        }
        return result;
    }
    
};