#include<iostream>
#include<vector>
using namespace std;
void setting_zero(int n,int m,vector<vector<int>>& matrix){
    int col[m] = {0};
    int row[n] = {0};
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(matrix[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(row[i] == 1 || col[j] == 1){
                matrix[i][j] = 0;
            }
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
    setting_zero(n,m,matrix);
    // printing the resultant matrix

    cout<<"the resultant matrix would be"<<endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cout<<matrix[i][j];
        }
        cout<<"\n";
    }
}