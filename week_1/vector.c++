#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(2);
    

    // creating pairs with vector 
    // vector<pair<int,int>> vec;
    // vec.emplace_back(2,3);
    // vec.push_back({4,5});
    // cout<<vec[1].second;

    // vector<int> v1(5,100);
    // vector<int> v2(v1);

    // iterators 
    vector<int>v = {20,10,5,7,15};
    // vector<int>::iterator it = v.begin();
    // it++;
    // cout<<*(it)<<" ";
    // it = it+2;
    // cout<<*(it)<<" ";
    // vector<int>::iterator it = v.end();//pointing to the memory address right after the last element
    // it--;
    // cout<<*it;
    // for(auto it = v.begin();it!=v.end();it++)
    // for(auto it : v)
    // {
    //     cout<<it<<" ";
    // }

    // deleting the element in vector 
    v.erase(v.begin()+1,v.begin()+4);
    //  for(auto it : v)
    // {
    //     cout<<it<<" ";
    // }

    // inserting elements in vector 

    v.insert(v.begin()+2,2,100);
    //    for(auto it : v)
    // {
    //     cout<<it<<" ";
    // }

    // inserting a vector inside a vector 

    vector<int> copy(2,50);
    v.insert(v.begin(),copy.begin(),copy.end());
       for(auto it : v)
    {
        cout<<it<<" ";
    }

}