class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> sum;
        vector<int> res;
        
        for(int i=0;i<nums.size();i++)
        {
            if(sum.find(target - nums[i])!=sum.end())
            {
                res.push_back(sum[target - nums[i]]);
                res.push_back(i);
                return res;
            }
            sum[nums[i]] = i;
        }
        return res;
    }
};
