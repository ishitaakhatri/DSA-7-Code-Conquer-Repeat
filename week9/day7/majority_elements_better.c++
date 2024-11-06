#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    vector <int> answer;
    int min = n/3;
    int hash[1000000] = {0};
    for(int i = 0 ; i < n ; i++){
        hash[arr[i]] += 1;
        if(hash[arr[i]] > min){
            answer.push_back(arr[i]);
        }
    }
    for(int i = 1 ; i <= 2 ; i++){
        cout<<answer[i];
    }
}