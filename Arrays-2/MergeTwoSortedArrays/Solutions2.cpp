class Solution {
public:
    
    void insertionSort(vector<int>& nums2)
    {
        int key = 0;
        for(int idx = 1;idx < nums2.size();idx++)
        {
            key = nums2[idx];
            int j = idx-1;
            while(j >= 0 && nums2[j] > key)
            {
                nums2[j+1] = nums2[j];
                j--;
            }
            nums2[j+1] = key;
        }
    }
    
    void swap(vector<int>& nums1, int FstArrayIdx, vector<int>& nums2, int SndArayIdx)
    {
        int temp = nums1[FstArrayIdx];
        nums1[FstArrayIdx] = nums2[SndArayIdx];
        nums2[SndArayIdx] = temp;
    }
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        if(n <= 0)
        {
            return;
        }
            
        int FstArrayIdx = 0;
        while(FstArrayIdx < m)
        {
            if(nums1[FstArrayIdx] > nums2[0])
            {
                swap(nums1,FstArrayIdx,nums2,0);
                insertionSort(nums2);
                
            }
            FstArrayIdx++;
            
        }
        for(int i=0;i<nums1.size();i++)
        {
            cout<<nums1[i]<<" ";
        }
        FstArrayIdx = m;
        while(FstArrayIdx < m+n)
        {
            nums1[FstArrayIdx] = nums2[FstArrayIdx-m];
            FstArrayIdx++;
        }
        
    }
};