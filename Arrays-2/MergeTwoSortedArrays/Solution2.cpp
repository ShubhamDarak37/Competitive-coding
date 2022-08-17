class Solution {
public:
    
    void iSort(vector<int>& nums2)
    {
        for(int i=1;i<nums2.size();i++)
        {
            int key = nums2[i];
            int j = i-1;
            while(j>=0 && nums2[j] > key)
            {
                nums2[j+1] = nums2[j];
                j--;
            }
            nums2[j+1] = key;
        }
    }
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        if(nums2.size() <= 0)
        {
            return;
        }
        //Trick is to swap the elements as per array 1 and rearrange array2
        int ar1Idx = 0,temp=0;
        while(ar1Idx < m)
        {
            if(nums1[ar1Idx] > nums2[0])
            {
                temp = nums1[ar1Idx];
                nums1[ar1Idx] = nums2[0];
                nums2[0] = temp;
                iSort(nums2);
            }
            ar1Idx++;
        }
        ar1Idx = 0;
        while(ar1Idx < n)
        {
            nums1[ar1Idx + m] = nums2[ar1Idx];
            ar1Idx++;
        }
        return;
    }
};