# search-2D-matrix-or-Array

**QUESTION:**

Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.

Example 1:

![mat](https://user-images.githubusercontent.com/72162952/125499992-0cc12559-0bfb-4ed8-a9a9-17082ae44fde.jpg)

Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
Example 2:

![mat](https://user-images.githubusercontent.com/72162952/125500007-e96c3e62-bd09-49d2-9769-b8d7ab4ba824.jpg)

Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false

**Constraints:**

m == matrix.length
n == matrix[i].length
1 <= m, n <= 100
-10^4 <= matrix[i][j], target <= 10^4
