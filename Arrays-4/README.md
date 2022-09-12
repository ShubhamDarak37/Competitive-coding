## Two Sum:

**_Appoach:_**

#### Solution 1 Hash Map:

- Use hashmap to check if the required element is present in the array to produce the sum.
- We check the conditions for current elements before even adding it to hash map, that compensates for checking same element twice
- **Time complexity: O(n)** 
- **Space complexity: O(n)**

#### Solution 2 Binary serch:

- First we sort the array.
- We take two pointers, i and j.
- Now we check if nums[i] + nums[j] == target. if they don’t sum up, and nums[i] + nums[j] > target, so we will reduce j by 1 or vice-versa.
- **Time complexity: O(nlogn)** 
- **Space complexity: O(n)**