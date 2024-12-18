// Given a non null integer matrix Grid of dimensions NxM.Calculate the sum of its elements.

// Example 1:

// Input:
// N=2,M=3
// Grid=
// [[1,0,1],
// [-8,9,-2]]
// Output:
// 1
// Explanation:
// The sum of all elements of the matrix is 
// (1+0+1-8+9-2)=1.
// Example 2:

// Input:
// N=3,M=5
// Grid=
// [[1,0,1,0,1],
// [0,1,0,1,0],
// [-1,-1,-1,-1,-1]]
// Output:
// 0
// Explanation:
// The sum of all elements of the matrix are
// (1+0+1+0+1+0+1+0+1+0-1-1-1-1-1)=0.


// Your Task:
// You don't need to read input or print anything.Your task is to complete the function sumOfMatrix() which takes two integers N ,M and a 2D array Grid as input parameters and returns the sum of all the elements of the Grid.



class Solution {
  public:
    int sumOfMatrix(int N, int M, vector<vector<int>> Grid) {
        int sum = 0;
        for(int i = 0 ; i < N ; i++){
            for(int j = 0 ; j < M ; j++){
                sum = sum + Grid[i][j];
            }
        }
        return sum;
    }
};