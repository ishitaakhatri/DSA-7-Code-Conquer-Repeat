// Given a matrix of size N x N. Print the elements of the matrix in the snake like pattern depicted below.


// Examples :

// Input: N = 3, matrix[][] = [[45, 48, 54], [21, 89, 87], [70, 78, 15]]
// Output: 45 48 54 87 89 21 70 78 15 
// Explanation: Printing it in snake pattern will lead to the output as 45 48 54 87 89 21 70 78 15.
// Input: N = 2, matrix[][] = [[1, 2], [3, 4]]
// Output: 1 2 4 3 
// Explanation: Printing it in snake pattern will give output as 1 2 4 3.
// Constraints:
// 1 <= N <= 103
// 1 <= mat[i][j] <= 109

class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        vector <int> temp;
        int n = matrix.size();
        for(int i = 0 ; i < n ; i++){
            if(i%2 == 0){
                for(int j = 0 ; j < n ; j++){
                    temp.push_back(matrix[i][j]);
                }
            }
            else{
                for(int j = n-1 ; j >= 0 ; j--){
                    temp.push_back(matrix[i][j]);
                }
            }
        }
        return temp;
    }