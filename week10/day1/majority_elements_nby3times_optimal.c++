#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int count1 = 0 , count2 = 0 , element1 = INT , element2 = 0;
    for(int i = 0 ; i < n ; i++){
        if(count1 == 0 && arr[i] != element1){
            count1 = 1;
            element1 = arr[i];
        } 
        else if(count2 == 0 && arr[i] != element2){
            count2 = 1;
            element2 = arr[i];
        }
        else if(element1 == arr[i]) count1++;
        else if(element2 == arr[i]) count2++;
        else{
            count1--;
            count2--;
        }
    }
    vector<int> ls;
    count1 = 0;
    count2 = 0;
    for(int i = 0 ; i < n ; i++){
        if(element1 == arr[i]) count1++;
        if(element2 == arr[i]) count2++;
    }
    int mini = (int)(n/3)+1;
    if(count1 >= mini)ls.push_back(element1);
    if(count2 >= mini)ls.push_back(element2);
    sort(ls.begin(),ls.end());
    return ls;

}