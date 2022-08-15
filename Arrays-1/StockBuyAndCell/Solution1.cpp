class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int cur_min = INT_MAX,cur_max = INT_MIN;
        for(int rowIdx = 0;rowIdx < prices.size();rowIdx++)
        {
            cur_min = min(cur_min,prices[rowIdx]);
            cur_max = max(cur_max,prices[rowIdx] - cur_min);
        }
        return cur_max;
    }
};