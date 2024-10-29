#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int longest_sequence(int arr[],int n){
    if(n==0) return 0;
    int longest = 1;
    unordered_set <int> st;
    for(int i = 0 ; i < n ; i++){
        st.insert(arr[i]);
    }
    for(auto it : st){
        if(st.find(it-1) == st.end()){
            int count = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x = x+1;
                count = count+1;
            }
            longest = max(longest,count);
        }
    }
    return longest;
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
    cout<<"the answer is: "<<longest_sequence(arr, n);
}