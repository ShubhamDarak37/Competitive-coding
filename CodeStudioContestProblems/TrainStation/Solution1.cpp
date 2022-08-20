int findLowestIndex(vector<int> arr, int val)
{
    int l=0,r=arr.size()-1;
    while(r-l > 1)
    {
        int mid = (l+r)/2;
        if(arr[mid]>val)
        {
            r = mid;
        }
        else
        {
            l=mid;
        }
    }
    if(arr[l] > val)
    {
        return l; 
    }
    else
    {
        return r;   
    }
}

vector<int> findTrainStation(int n, vector<int> v, int q, vector<int> query) {
	// Write your code here.
    int oneSideTime = 0;
    for(int i=0;i<v.size();i++)
    {
        oneSideTime += v[i];
    }
    
    vector<int> prefixSum(n), suffixSum(n);
    prefixSum[0] = v[0];
    for(int i=1;i<v.size();i++)
    {
        prefixSum[i] = v[i] + prefixSum[i-1];
    }
    
    suffixSum[n-1] = v[n-1];
    for(int i=n-2;i>=0;i--)
    {
        suffixSum[i] = suffixSum[i+1] + v[i];
    }
    reverse(suffixSum.begin(),suffixSum.end());
    vector<int> res;
    for(int i=0;i<q;i++)
    {
        int quo =  query[i] / oneSideTime;
        int rem = query[i] % oneSideTime;
        
        // edge case you have reached one end Important as odd and even quo conditions are changed here
        if(rem==0)
        {
            if(quo%2) // -> n
            {
                res.push_back(n);
            }
            else // -> 1
            {
                res.push_back(1);
            }
        }
        else if(quo%2 == 0)
        {
            int trainStation = findLowestIndex(prefixSum,rem);
            res.push_back(trainStation + 1);
        }
        else
        {
            int trainStation =n - findLowestIndex(suffixSum,rem) - 1;
            res.push_back(trainStation + 1);
        }
    }
    
    
    
    return res;
}