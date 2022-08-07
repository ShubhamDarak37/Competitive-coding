class Solution {
public:
    
    int maxSubArray(vector<int>& nums) 
    {
        vector<int> dp;
        dp.push_back(nums[0]);
        int cur_max = dp[0];
        
        for(int rowIdx = 1;rowIdx < nums.size();rowIdx++)
        {
            dp.push_back((dp[rowIdx-1] > 0 ? dp[rowIdx-1] : 0) + nums[rowIdx]);
            cur_max = max(cur_max,dp[rowIdx]);
        }
        return cur_max;
    }
};