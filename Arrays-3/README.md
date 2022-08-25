## Search a 2D Matrix:

**_Appoach:_**

#### Solution 1 Binary Search:

- As the elements are sorted row-wise as well as column-wise.
- Binary search can be applied forthe row where element can be present
- **Time complexity: O(mlog(n))** 
- **Space complexity: O(1)**

#### Solution 2 Binary Search on 2D Matrix:

- Apply Binary Search on whole matrix, considering matrix as a single 1D array.
- mid element indexing = [mid/matrix[0].size()][mid%matrix[0].size()]
- **Time complexity: O(log(m*n))** 
- **Space complexity: O(1)**

## Pow (x,n):

**_Approach:_**

#### Solution 1:

- If the order is even, take square of input value hence reducing the power to half.
- if the order is odd, multiply the input value with result and reduce the power by 1.
- perform above logic in a loop until power beomes 0
- **Time complexity: O(log(n))** 
- **Space complexity: O(1)**

## Majority Element 

**_Approach:_**

#### Solution 1 where element count is > N/2:

- sort the array
- keep track of count and max count element while iterating through the for loop
- **Time complexity: O(nlog(n))** 
- **Space complexity: O(1)**

#### Solution 2 where element count is > N/3 and can have multiple elements in result:

- same approach as above, just keep the track of count and store multiple elements.

## Unique Paths

**_Approach:_**

#### Solution 1 Recursive approach:

- recursively move either to right or down in the matrix and increase the unique path count if we reach position [m-1][n-1]
- **Time complexity: exponential for Recursion** 
- **Space complexity: exponential for recursion as stack is used to keep track of calls**

#### Solution 2 DP approach:

- create a DP matrix and initialize the last row and last column with one as there is only one path possible through those positions you cannot go down from last row and you cannot go right from last column.
- start iterating matrix backwards [m-2][n-2], this position unique path will be sum of possible paths from down and right positions.
- **Time complexity: O(m*n)** 
- **Space complexity: O(m*n)**

Reverse Pairs:

- Divide and conqer approach using mege sort:
- **Time complexity: O(nlo(n))** 
- **Space complexity: O(n)**

