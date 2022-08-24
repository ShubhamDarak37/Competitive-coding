class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int idx = 0, maxCount = INT_MIN,maxEl = nums[0]; 
        while(idx < nums.size())
        {
            int tempCount = 0;
            while(idx<nums.size()-1 && nums[idx] == nums[idx+1])
            {
                tempCount += 1;
                idx++;
            }
            if(tempCount > maxCount)
            {
                maxCount = tempCount;
                maxEl = nums[idx];
            }
            idx++;
        }
        return maxEl;
    }
};