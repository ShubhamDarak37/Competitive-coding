class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {   
        int T = nums[0],H = nums[0];
        do
        {
            H = nums[nums[H]];
            T = nums[T];
        }while(H!=T);
        
        T = nums[0];
        while(T!=H)
        {
            T = nums[T];
            H = nums[H];
        }
        
        return H;
        
    }
};
