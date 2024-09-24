#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n; 
    cout<<"enter the elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int number;
    cout<<"enter the number"<<endl;
    cin>>number;
    vector<int> answer;
    for(int i = 1 ; i <= number ; i++){
        int flag = 0;
        for(int j = 0 ; j < n ; j++){
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }
          if(flag == 0){
        answer.push_back(i);
    }
    }
  
    for(int i = 0 ; i < answer.size() ; i++){
        cout<<answer[i]<<" ";
    }

}
