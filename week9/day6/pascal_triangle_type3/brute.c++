#include<iostream>
#include<list>
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
    list <list<int>> answer;
    for(int i = 0 ; i <= n ; i++){
        list <int> temp;
        for(int j = 1 ; j <= i ; j++){
            temp.push_back(pascal_triangle(i,j));
        }
        answer.push_back(temp);
    }
    cout<<"the answer would be"<<endl;
    for (const auto& row : answer) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }
}