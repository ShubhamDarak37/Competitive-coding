class Solution {
public:
    
    
    void swap(vector<int>& nums1, int idx1, vector<int>& nums2, int idx2)
    {
        int temp = nums1[idx1];
        nums1[idx1] = nums2[idx2];
        nums2[idx2] = temp;
        
    }
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        if(nums2.size() <= 0)
        {
            return;
        }
        //Trick is to swap on the basis of gaps
        // edge case make sure you use ceil((float)gap/2) for gap division
        int gap = ceil((float)(m+n)/2),idx1 = 0,idx2 = gap;
        while(gap>0) 
        {
            idx2 = gap;
            idx1 = 0;
            while(idx1 < m+n && idx2 < m+n)
            {
                if(idx1 < m && idx2 < m && nums1[idx1] > nums1[idx2])
                {
                    swap(nums1,idx1,nums1,idx2);
                }
                else if(idx1<m && idx2>= m && nums1[idx1] > nums2[idx2-m])
                {
                    swap(nums1,idx1,nums2,idx2-m);            
                }
                else if(idx1 >=m && idx2 >= m && nums2[idx1-m] > nums2[idx2-m])
                {
                    swap(nums2,idx1-m,nums2,idx2-m);
                }
                idx1++;
                idx2++;
            }
            if(gap==1)
            {
                gap=0;
            }
            else
            {
                gap = ceil((float)gap/2);
            }
        }
        idx1 = 0;
        while(idx1 < n)
        {
            nums1[idx1+m] = nums2[idx1];
            idx1++;
        }
        
    }
};