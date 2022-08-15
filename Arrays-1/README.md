## Set Matrix Zeroes:

**_Approach:_**

- The Elements in matrix should be made zero **Inplace**.
- The **zeroth row** and **zeroth column** are used to keep track of elements to be made zero.
- Track **Zeroth row** using **[0,0] Element** and **Zeroth column** using **separate variable**.
- For **Rows** iterate through **Zeroth Index** and for **Columns** iterate through **First Index**.
- **Time complexity: O(n)** 
- **Space complexity: O(1)**

## Pascal's Triangle:

**_Approach:_**

- Initialize 2D vector with given input size of Pascal's traingle.
- For Every ith Iteration **increase the size of ith row by 1**.
- Set the value of **first** and **last** element as **1**.
- **Resulting values** will be sum of **[i-1][j-1]** and **[i-1][j]** elements.
- **Time complexity: O(n)** 
- **Space complexity: O(1)**

## Next Permutation:

**_Approach:_**

- First, we observe that for any given sequence that is in descending order, no next larger permutation is possible.
- We need to find the first pair of two successive numbers a[i]a[i] and a[i-1]a[i−1], from the right, which satisfy a[i] > a[i-1]a[i]>a[i−1].
- We want to create the permutation just larger than the current one. Therefore, we need to replace the number a[i-1]a[i−1] with the number which is just larger than itself among the numbers lying to its right section, say a[j]a[j].
- We swap the numbers a[i-1] and a[j].
- We need the smallest permutation, all numbers to the right of a[i−1] were already sorted in descending order. Furthermore, swapping a[i−1] and a[j] didn't change that order. Therefore, we simply need to reverse the numbers following a[i−1] to get the next smallest lexicographic permutation.
- **Time complexity: O(n)** 
- **Space complexity: O(1)**

## Max Subarray (Kadanes Algorithm):

**_Approach:_**

