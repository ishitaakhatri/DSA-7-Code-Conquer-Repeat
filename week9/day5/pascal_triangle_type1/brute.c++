#include<iostream>
using namespace std;
int factorial(int num) {
    int fact = 1;
    for(int i = num; i >= 1; i--) {
        fact *= i;
    }
    return fact;
}
void pascal_triangle(int row,int column){
     if (column > row) {
        cout << "Invalid input: column cannot be greater than row." << endl;
        return;
    }
    int n;
    int d1;
    int d2;
   
    n = factorial(row-1);
    d1 = factorial(column-1);
    d2 = factorial(row-column);
    int result = n/(d1*d2);
    cout<<"the answer would be "<<result;
}
int main()
{
    int row;
    int column;
    cout<<"enter the row number"<<endl;
    cin>>row;
    cout<<"Enter the column number"<<endl;
    cin>>column;
    pascal_triangle(row,column);
}