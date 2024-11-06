#include<iostream>
using namespace std;

void pascal_triangle(int row,int column){
    int res = 1;
    for(int i = 0 ; i < column ; i++){
        res = res*(row-i);
        res = res/(i+1);
    }
    cout<<"the answer would be "<<res;
}
int main()
{
    int row;
    int column;
    cout<<"enter the row number"<<endl;
    cin>>row;
    cout<<"Enter the column number"<<endl;
    cin>>column;
    pascal_triangle(row-1,column-1);
}