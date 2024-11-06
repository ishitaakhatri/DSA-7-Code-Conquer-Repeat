// For 2 given matrices of size n x n. Your task is to multiply them.
 

// Example 1:â€‹

// â€‹Input: 
// matrixA = {{1, 1, 1}, {1, 1, 1}, 
//            {1, 1, 1}}
// matrixB = {{1, 1, 1}, {1, 1, 1},
//            {1, 1, 1}}
// Output: {{3, 3, 3}, {3, 3, 3}, {3, 3, 3}}
// Example 2:

// Input: 
// matrixA = {{1, 2}, {3, 4}},
// matrixB = {{4, 3}, {2, 1}}
// Output: {{8, 5}, {20, 13}}
 

// Your Task:
// You don't need to read or print anything. Your task is to complete the function Multiply() which takes two matrices matrixA amd matrixB as input parameter and multiply the two matrices. You don't have to return anything. Copy the values of output matrix into matrixA.
 

// Expected Time Compelxity: O(n3)
// Expected Space Complexity: O(n2)

class Solution { 
public:
    void Multiply(vector<vector<int> >& matrixA, vector<vector<int>>&matrixB) {
        int n1 = matrixA.size();
        int m1 = matrixA[0].size();
        
        int n2 = matrixB.size();
        int m2 = matrixB[0].size();
        
        vector<vector<int>> temp(n1,vector<int>(m2,0));
        
        for(int i = 0 ; i < n1 ; i++){
            for(int j = 0 ; j < m2 ; j++){
                for(int k = 0 ; k < m1 ; k++){
                    temp[i][j] += matrixA[i][k] * matrixB[k][j];
                }
            }
        }
        
        matrixA = temp;
    }
};