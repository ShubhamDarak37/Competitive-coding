#include <bits/stdc++.h> 

long long merge(long long *arr,long long *temp,int l,int mid,int r)
{
    int i = l,j=mid,k=l;
    long long invCount = 0;
    while(i<=mid-1 && j<=r)
    {
        if(arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            invCount += mid - i;
        }
    }
    while(i<=mid-1)
    {
        temp[k++] = arr[i++];
    }
    while(j<=r)
    {
        temp[k++] = arr[j++];
    }
    for(int i=l;i<=r;i++)
        arr[i] = temp[i];
    
    return invCount;
}

long long mergeSort(long long *arr,long long *temp,int l,int r)
{
    long long invCount = 0;
    int mid;
    if(r>l)
    {
        mid = (l+r)/2;
        invCount += mergeSort(arr,temp,l,mid);
        invCount += mergeSort(arr,temp,mid+1,r);
        invCount += merge(arr,temp,l,mid+1,r);
    }
    return invCount;
}

long long getInversions(long long *arr, int n)
{
    // Write your code here
    long long temp[n];
    long long invCount=0;
    invCount = mergeSort(arr,temp,0,n-1);
    return invCount;
}