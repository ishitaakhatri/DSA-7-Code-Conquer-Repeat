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
    int element;
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(count == 0){
            count = 1;
            element = arr[i];
        }
        else if(arr[i] == element){
            count++;
        }
        else count--;
    }
    int count1 = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == element){
            count1++;
        }
    }
    if(count1 > (n/2)){
        cout<<"answer is "<<element;
    }
}