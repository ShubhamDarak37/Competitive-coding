int lengthOfLongestSubArr(string &s)
{
    
    //  Write your code here.
    pair<int,int> dp[s.size()][s.size()];
    
    pair<int,int> temp;
    if(s[0] == 'B')
    {
        temp.first++;
    }
    else
    {
        temp.second++;
    }
    dp[0][0] = temp;
    int max = 0;
    
    for(int i=1;i<s.size();i++)
    {
        pair<int,int> temp;
        if(s[i] == 'B')
        {
            temp.first++;
        }
        else
        {
            temp.second++;
        }
        dp[i][i] = temp;
        for(int j=i-1;j>=0;j--)
        {
            pair<int,int> temp;
            temp = dp[i][i];
            temp.first += dp[i-1][j].first;
            temp.second += dp[i-1][j].second;
            dp[i][j] = temp;
            if(temp.first == temp.second && max < temp.first)
            {
                max = temp.first; 
            }
        }
    }
    return max*2;
}