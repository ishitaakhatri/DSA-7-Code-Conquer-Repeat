// Print GFG n times without the loop.

// Example:

// Input:
// 5
// Output:
// GFG GFG GFG GFG GFG
// Your Task:
// This is a function problem. You only need to complete the function printGfg() that takes N as parameter and prints N times GFG recursively. Don't print newline, it will be added by the driver code.


class Solution {
  public:
  int count = 0;
    void printGfg(int N) {
        if(count == N)
        return;
        
        cout<<"GFG"<<" ";
        count++;
        printGfg(N);
    }
};