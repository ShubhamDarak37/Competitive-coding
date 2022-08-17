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

#### Solution3.cpp Inplace Sorting approach with GAP strategy:

- Compute gap = ceil((float(m+n)/2)) => idx2, idx1 => 0 for next iterations gap = gap / 2 until gap > 0
- if nums[idx1] > nums2[idx2] swap,  increament idx1,idx2 based on respective positions in both the array.
- **Time complexity: O(m + n)** 
- **Space complexity: O(1)**

## Find The Duplicate Number:

**_Approach:_**

#### Solution1.cpp Array Hash Map solution:

- create a temproray array of size n, where orignal array has n + 1 elements
- iterate through the given array perform temp[nums[idx]]++;
- check if any temp value is gt than 1, that will be the duplicate element.
- **Time complexity: O(n)** 
- **Space complexity: O(n)**

#### Solution2.cpp Negative marking approach:

- same as above approach, instead of increamenting values in new array, mark the indexes -ve in current array itself
- make sure to use abs() for nums[abs(nums[i])].
- **Time complexity: O(n)** 
- **Space complexity: O(1)**

#### Solution2.cpp Floyd's Tortoise and Hare (Cycle Detection):

- Detect loop with H = nums[nums[H]]; T = nums[T] until H!=T;
- find the loop start point (which is the duplicate number) with H = nums[H];T = nums[T], where T will start from nums[0] until H!=T;
- **Time complexity: O(n)** 
- **Space complexity: O(1)**

