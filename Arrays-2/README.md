## Merge Two Sorted Arrays:

**_Approach:_**

#### Solution1.cpp Extra space is provided in array 1:

- Three pointer approach, where two pointers will track last elements of two arrays, third pointer to keep track of positions where the elements will be inserted in the first array.  
- Check for the largest element and keep on placing it at based on third index (inserting positions in array 1)
- At last Check for remaining elements from both the arrays to be added at the inserting positions in the array1.
- **Time complexity: O(m + n)** 
- **Space complexity: O(1)**

#### Solution2.cpp Inplace Sorting approach:

- 1 pointer approach, compare the elements from both the arrays.
- swap if A1[i] > A2[j] and rearrange the second array using Insertion sort logic.
- **Time complexity: O(m * n)** 
- **Space complexity: O(1)**