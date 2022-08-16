class Solution {
public:
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        
        //Trick is to start with last indices of both the arrays
        int ar1Idx = m-1, ar2Idx = n-1, tba = nums1.size()-1;
        
        while(ar1Idx >= 0 && ar2Idx >= 0)
        {
            if(nums1[ar1Idx] > nums2[ar2Idx])
            {
                nums1[tba] = nums1[ar1Idx];
                tba--;
                ar1Idx--;
            }
            else
            {
                nums1[tba] = nums2[ar2Idx];
                tba--;
                ar2Idx--;
            }
        }
        
        //Important to cover edge cases
        while(ar1Idx>=0)
        {
            nums1[tba] = nums1[ar1Idx];
            tba--;
            ar1Idx--;
        }
        while(ar2Idx >=0)
        {
            nums1[tba] = nums2[ar2Idx];
            tba--;
            ar2Idx--;
        }
    }
};