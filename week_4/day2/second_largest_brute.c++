#include<iostream>
using namespace std;
void sorting(int arr[],int n){

    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j <= i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sorting(arr,n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int largest = arr[n-1];
    int second_largest = -1;
   for(int i = n-2 ; i >= 0 ; i--){
    if(arr[i] != largest){
        second_largest = arr[i];
        break;
    }
   }
   cout<<"the second largest element is "<<endl;
   cout<<second_largest;

    return 0;
}