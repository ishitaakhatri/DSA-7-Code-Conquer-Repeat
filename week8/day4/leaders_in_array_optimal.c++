#include <iostream>
#include <vector>
using namespace std;
void leaders(int arr[], int n)
{
    int maxi = arr[n-1];
    vector <int> temp;
    temp.push_back(maxi);
    for(int i = (n-1) ; i >= 0 ; i--){
        if(arr[i] > maxi){
            maxi = arr[i];
            temp.push_back(arr[i]);
        }
    }
    cout<<"the leaders would be"<<endl;
    for(int i = 0 ; i < temp.size() ; i++){
        cout<<temp[i]<<" ";
    }
}
int main()
{
    int n;
    cout << "enter the number of elements in array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    leaders(arr, n);
}