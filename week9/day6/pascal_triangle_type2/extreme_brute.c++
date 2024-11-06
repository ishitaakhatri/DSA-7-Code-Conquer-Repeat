#include<iostream>
using namespace std;
int factorial(int num) {
    int fact = 1;
    for(int i = num; i >= 1; i--) {
        fact *= i;
    }
    return fact;
}
int pascal_triangle(int row,int column){
     if (column > row) {
        cout << "Invalid input: column cannot be greater than row." << endl;
        return 0;
    }
    int n;
    int d1;
    int d2;
   
    n = factorial(row-1);
    d1 = factorial(column-1);
    d2 = factorial(row-column);
    int result = n/(d1*d2);
    return result;
}
int main()
{
    int n;
    cout<<"enter the row number"<<endl;
    cin>>n;
    for(int i = 1 ; i < n+1 ; i++){
        cout<<pascal_triangle(n,i)<<" ";
    }
}