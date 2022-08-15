class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        if(intervals.size()<=1)
        {
            return intervals;
        }
        vector<vector<int>> ans;
        
        //below sorting function code can also be used to sort based on 2nd element 
        sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b){return a[0] < b[0];});
        ans.push_back(intervals[0]);
        for(int idx = 1;idx<intervals.size();idx++)
        {
            if(ans.back()[1] >= intervals[idx][0])
            {
                //Imp edge case: next interval can also be a complete subset of first interval, In that case no need to update the End
                ans.back()[1] = max(ans.back()[1],intervals[idx][1]);
            }
            else
            {
                ans.push_back(intervals[idx]);
            }
        }
        return ans;
    }
};