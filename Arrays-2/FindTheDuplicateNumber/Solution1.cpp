class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        vector<int> temp(nums.size()-1,0);
        for(int i=0;i<nums.size();i++)
        {
            temp[nums[i]-1]++;
            if(temp[nums[i]-1] > 1)
            {
                return nums[i];
            }
        }
        
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]>1)
            {
                return i+1;
            }
        }
        return 0;
    }
};