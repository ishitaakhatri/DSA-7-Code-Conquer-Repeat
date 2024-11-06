#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the row"<<endl;
    cin>>n;
    int ans = 1;
    cout<<ans<<" ";
    for(int i = 1 ; i < n ; i++){
        ans = ans * (n-i);
        ans = ans/i;
        cout<<ans<<" ";
    }
}