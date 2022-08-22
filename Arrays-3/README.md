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
