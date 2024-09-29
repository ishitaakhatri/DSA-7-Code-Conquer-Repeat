#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i < n ; i++){
        int num = arr[i];
        int counter = 0;
        for(int j = 0 ; j < n ; j++){
            if(arr[j] == num){
                counter++;
            }
        }
        if(counter == 1){
            cout<<num;
        }
    }
}