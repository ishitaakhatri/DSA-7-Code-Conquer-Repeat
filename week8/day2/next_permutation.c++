#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int first = 0;
    int last = n-1;
    while(first < last){
        swap(arr[first],arr[last]);
        first++;
        last--;
    }
}
void reverse_remaining(int first,int last,int arr[]){
    while(first < last){
        swap(arr[first],arr[last]);
        first++;
        last--;
    }
}
int main()
{
    int n;
    cout<<"enter the number of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int index = -1;
    for(int i = n-2 ; i >= 0 ; i--){
        if(arr[i] < arr[i+1]){
            index = i;
        }
    }
    if(index == -1){
        reverse(arr,n);
        cout<<"the answer array would be"<<endl;
        for(int i = 0 ; i < n ; i++){
            cout<<arr[i]<<" ";
        }
    }
   else{
      for(int i = n-1 ; i >= index ; i--){
        if(arr[i] > arr[index]){
            swap(arr[i],arr[index]);
            break;
        }
    }
    reverse_remaining(index+1,n-1,arr);
   }
    cout<<"the answer array would be"<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}