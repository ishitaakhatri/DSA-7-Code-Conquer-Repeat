#include<iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cout<<"enter the number of rows and columns"<<endl;
    cin>>n>>m;
    int arr[n][m];
    cout<<"enter the elements"<<endl;
    // which array we are going to fill
    for(int i = 0 ; i < n ; i++){
        // actually filling that array
        for(int j = 0 ; j < m ; j++){
            cin>>arr[i][j];
        }
    }
    int x;
    cout<<"enter the element"<<endl;
    cin>>x;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(x == arr[i][j]){
                cout<<"element is found at "<<i<<" "<<j;
                break;
            }
        }
    }
}