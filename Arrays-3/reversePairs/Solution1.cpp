class Solution {
public:
    
    int invCount = 0;
    
    void merge(vector<int>& nums,int l,int mid,int r)
    {
        int i=l,j=mid+1;
        while(i<=mid && j<=r)
        {
            if((long)nums[i] > (long)2*nums[j])
            {
                invCount += (mid-i+1);
                j++;
            }
            else
            {
                i++;
            }
        }
        sort(nums.begin() + l,nums.begin() + r + 1);
        return;
    }
    
    void mergeSort(vector<int>& nums,int l,int r)
    {
        if(l<r)
        {
            int mid = l + (r-l)/2;
            
            mergeSort(nums,l,mid);
            mergeSort(nums,mid+1,r);
            
            merge(nums,l,mid,r);
        }
        return;
    }
    
    int reversePairs(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return invCount;
    }
};