#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    
    //perform xor operation for all the elements in the array
    int xor1 = arr[0];
    for(int i=1;i<arr.size();i++)
    {
        xor1 = xor1 ^ arr[i];
    }
    
    //perform xor operation for element 1 to n
    for(int i=1;i<=n;i++)
    {
        xor1 = xor1 ^ i;
    }
    
    //Now xor1 = x ^ y, get the right_set_bit using 2's complement
    int rightSetBit = xor1 & ~(xor1 - 1);
    int x = 0;
    int y = 0;
    //add the elements of array and (1,n) in two separate buckets missing and repeating respectively
    for(int i=0;i<arr.size();i++)
    {
        if(rightSetBit & arr[i])
        {
            x = x ^ arr[i];
        }
        else
        {
            y = y ^ arr[i];
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        if(rightSetBit & i)
        {
            x = x ^ i;
        }
        else
        {
            y = y ^ i;
        }
    }
    
    //check which element is missing and which is repeating 
    int checkCount = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == x)
        {
            checkCount++;
            break;
        }
    }
    pair<int,int> res;
    if(checkCount > 0)
    {
        res.first = y;
        res.second = x;
        return res;
    }
    else
    {
        res.second = y;
        res.first = x;
        return res;
    }
}
