class Solution {
public:
    
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int l = 0;
        if(matrix.size()==0)
            return false;
        int h = (matrix.size()*matrix[0].size())-1;
        while(l<=h)
        {
            int mid = l + (h-l)/2;
            if(matrix[mid/matrix[0].size()][mid%matrix[0].size()] == target)
                return true;
            else if(matrix[mid/matrix[0].size()][mid%matrix[0].size()] > target)
                h = mid - 1;
            else
                l = mid + 1;
        }
        return false;
    }
};