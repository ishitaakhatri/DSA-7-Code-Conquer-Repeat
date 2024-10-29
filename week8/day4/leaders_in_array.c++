#include<iostream>
#include<vector>
using namespace std;
void leaders(int arr[] , int n){
    vector<int> temp;
    for(int i = 0 ; i < n ; i++){
        bool is_leader = true;
        for(int j = i+1 ; j < n ; j++){
            if(arr[i] < arr[j]){
                is_leader = false;
                break;
            }
        }
        if(is_leader == true){
        temp.push_back(arr[i]);
    }
    }
    
    cout<<"the leaders are"<<endl;
    for(int i = 0 ; i < temp.size() ; i++){
        cout<<temp[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"enter the number of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    leaders(arr,n);
}