class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        //Kadanes Algorithm
        
        int max_so_far = INT_MIN,max_ending_here = 0;
        for(int rowIdx = 0;rowIdx < nums.size();rowIdx++)
        {
            max_ending_here += nums[rowIdx];
            if(max_so_far < max_ending_here)
            {
                max_so_far = max_ending_here;
            }
            if(max_ending_here < 0)
            {
                max_ending_here = 0;
            }
        }
        return max_so_far;
        
    }
};