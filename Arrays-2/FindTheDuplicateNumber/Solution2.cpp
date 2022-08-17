class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {   
        int i = 0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[abs(nums[i])] < 0)
            {
                break;
            }
            nums[abs(nums[i])] = -(nums[abs(nums[i])]);
        }
        
        for(int j=0;j<nums.size();j++)
        {
            nums[j] = abs(nums[j]);
        }
        return nums[i];
    }
};