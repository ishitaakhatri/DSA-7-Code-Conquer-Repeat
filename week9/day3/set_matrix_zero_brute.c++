#include<iostream>
#include<vector>
using namespace std;
void mark_row(int i,vector<vector<int>>& matrix,int m){
     for(int j = 0 ; j < m ; j++){
        if(matrix[i][j] != 0){
            matrix[i][j] = -1;
        }
    }
}
void mark_column(int j,vector<vector<int>>& matrix , int n){
    for(int i = 0 ; i < n ; i++){
        if(matrix[i][j] != 0){
            matrix[i][j] = -1;
        }
    }
}
int main()
{
    int n;
    int m;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    cout<<"enter the number of columns"<<endl;
    cin>>m;
    cout<<"enter the elements "<<endl;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>matrix[i][j];
        }
    }
    // finding zeros and marking them as -1
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(matrix[i][j] == 0){
                mark_row(i,matrix,m);
                mark_column(j,matrix,n);
            }
        }
    }
    // now changing -1 tp 0
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(matrix[i][j] == -1){
                matrix[i][j] = 0;
            }
        }
    }

    // printing the resultant matrix

    cout<<"the resultant matrix would be"<<endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cout<<matrix[i][j];
        }
        cout<<"\n";
    }
}