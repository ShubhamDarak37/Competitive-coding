class Solution {
public:
    
    bool binarySearch(vector<int> matArray,int target)
    {
        int l=0,r=matArray.size()-1;
        while(l<=r)
        {
            int mid = l + (r-l)/2;
            if(matArray[mid] == target)
                return true;
            else if(matArray[mid] > target)
                r=mid-1;
            else
                l=mid+1;
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        for(int i=0;i<matrix.size();i++)
        {
            if(matrix[i][0] <= target && matrix[i][matrix[i].size()-1]>=target)
            {
                if(binarySearch(matrix[i],target))
                    return true;
            }
        }
        return false;
    }
};