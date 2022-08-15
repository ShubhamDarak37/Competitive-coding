## Set Matrix Zeroes:

#### Approach:

- The Elements in matrix should be made zero **Inplace**.
- The **zeroth row** and **zeroth column** are used to keep track of elements to be made zero.
- Track **Zeroth row** using **[0,0] Element** and **Zeroth column** using **separate variable**.
- For **Rows** iterate through **Zeroth Index** and for **Columns** iterate through **First Index**.

## Pascal's Triangle:

#### Approach:

- Initialize 2D vector with given input size of Pascal's traingle.
- For Every ith Iteration **increase the size of ith row by 1**.
- Set the value of **first** and **last** element as **1**.
- **Resulting values** will be sum of **[i-1][j-1]** and **[i-1][j]** elements.  