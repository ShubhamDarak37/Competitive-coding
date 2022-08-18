int abs(int temp)
{
    if(temp < 0)
    {
        return -temp;
    }
    else
    {
        return temp;    
    }
}

vector<int> Solution::repeatedNumber(const vector<int> &A) 
{
    
    int r,m;
    for(int i=0;i<A.size();i++)
    {
        if(A[abs(A[i])] < 0)
        {
            r = i;
        }
        A[abs(A[i])] = -(A[abs(A[i])]);
    }
    
    for(int i=0;i<A.size();i++)
    {
        if(A[i]>0)
        {
            m = i;
        }
    }
    
    vector<int> res;
    
    res.push_back(r);
    res.push_back(m);
    
    return res;
}
