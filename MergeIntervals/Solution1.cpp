class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>> ans;
        
        sort(intervals.begin(),intervals.end());
        int start = intervals[0][0],end = intervals[0][1];   
        vector<int> temp;
        for(int idx = 1;idx<intervals.size();idx++)
        {
            if(end >= intervals[idx][0])
            {
                //Imp edge case: next interval can also be a complete subset of first interval, In that case no need to update the End
                if(end < intervals[idx][1])
                {
                    end = intervals[idx][1];
                }
            }
            else
            {
                temp.push_back(start);
                temp.push_back(end);
                ans.push_back(temp);
                temp.clear();
                start = intervals[idx][0];
                end = intervals[idx][1];
            }
        }
        temp.push_back(start);
        temp.push_back(end);
        ans.push_back(temp);
        temp.clear();
        return ans;
	//Time complexity: O(nlogn) sorting + O(n) loop iteration
    }
};