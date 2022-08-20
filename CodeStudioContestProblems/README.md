#### Train Station

**_Approach:_**

- Get the total time required to reach one end
- For every Query time get quotient and remainder between query and oneSideTime
- quotient: direction, Remainder: distance remaining in one go.
- Use Prefix and Suffix array with binary search for optimal search of station.
- Cover the edge case where rem == 0, the quo conditions get interchanged.
- In binary search we return arr[ind] > query time, as query time is starting from zero.
- **Time complexity: O(Q * log(n))** 
- **Space complexity: O(n)** 