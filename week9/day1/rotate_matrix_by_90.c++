// Given a square matrix of size n x n. The task is to rotate it by 90 degrees in an anti-clockwise direction without using any extra space. 

// Examples:

// Input: matrix[][] = [[1, 2, 3],
//                    [4, 5, 6]
//                    [7, 8, 9]]
// Output: Rotated Matrix:
// [3, 6, 9]
// [2, 5, 8]
// [1, 4, 7]
// Input: matrix[][] = [[1, 2],
//                    [3, 4]]
// Output: Rotated Matrix:
// [2, 4]
// [1, 3]
// Constraints:
// 1 ≤ n ≤ 102
// 1 <= matrix[][] <= 103

class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix) {
        int n = matrix.size();
        for(int i = 0 ; i < n ; i++){
            for(int j = i + 1 ; j < n ; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i = 0 ; i < n/2 ; i++){
            for(int j = 0 ; j < n ; j++){
                swap(matrix[i][j],matrix[n-1-i][j]);
            }
        }
    }
};