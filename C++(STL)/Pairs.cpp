#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> p = {1 , 3};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    pair<int, pair<int, int>> p1 = {1, { 2, 4}};
    cout<<p1.first<<endl;
    cout<<p1.second.first<<endl;
    cout<<p1.second.second<<endl;

    pair<pair<int,int> , pair<int, int>> p2 = { { 10 , 20} , { 30 , 40}};
    cout<<p2.first.first<<endl;
    cout<<p2.first.second<<endl;
    cout<<p2.second.first<<endl;
    cout<<p2.second.second<<endl;

    pair<int, int> arr[] = { {10 , 20} , {20 , 30}};
    cout<<arr[0].first;
}