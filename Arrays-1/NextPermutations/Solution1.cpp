class Solution {
public:
    
    void reverse(vector<int>& nums, int start)
    {
        int j = nums.size()-1;
        while(start<j)
        {
            swap(nums,start,j);
            start += 1;
            j -= 1;
        }
    }
    
    void swap(vector<int>& nums, int i, int j)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    
    void nextPermutation(vector<int>& nums) 
    {
        int i = nums.size()-2;
        while(i>=0 && nums[i] >= nums[i+1])
        {
            i -= 1;
        }
        if(i>=0)
        {
            int j = nums.size()-1;
            while(nums[j]<=nums[i])
            {
                j--;
            }
            swap(nums,i,j);
        }
        reverse(nums,i+1);
    }
};