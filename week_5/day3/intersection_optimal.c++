#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n1;
    cout<<"enter the number of elements in array1"<<endl;
    cin>>n1;
    int arr1[n1];
    cout<<"enter the elements"<<endl;
    for(int i = 0 ; i < n1 ; i++){
        cin>>arr1[i];
    }
    int n2;
    cout<<"enter the number of elements in array2"<<endl;
    cin>>n2;
    int arr2[n2];
    cout<<"enter the elements"<<endl;
    for(int i = 0 ; i < n2 ; i++){
        cin>>arr2[i];
    }
    int i = 0;
    int j = 0;
    vector<int> answer;
    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[j] < arr2[i]){
            j++;
        }
        else{
            answer.push_back(arr1[i]);
            j++;
            i++;
        }
    }
    for(int i = 0 ; i < answer.size() ; i++){
        cout<<answer[i]<<" ";
    }

}