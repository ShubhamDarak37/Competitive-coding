class Solution {
public:
    
    void swap(vector<int> &nums, int i, int j)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    
    void sortColors(vector<int>& nums) 
    {
        int i=0,j=0,k=nums.size()-1;
        while(j <= k)
        {
            if(nums[j] == 0)
            {
                swap(nums,i,j);
                i++;
                j++;
            }
            else if(nums[j] == 1)
            {
                j++;
            }
            else if(nums[j] == 2)
            {
                swap(nums,j,k);
                k--;
            }
           
        }
        
    }
};