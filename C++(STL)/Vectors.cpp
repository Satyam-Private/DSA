#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> v){
    cout<<"the vector is : "; 
    cout<<endl;
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;
}


int main(){
    // vector is a dynamic in nature 
    // we can add as many elements as we want 
    vector<int> v = {1, 2 , 4, 5};
    cout<<v[0]<<endl;
    v.push_back(20);
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.emplace_back(200);
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    vector< pair<int, int> > v1;
    v1.push_back({1, 3});
    cout<<v1[0].first<<endl;
    cout<<v1[0].second;
    cout<<endl;
    vector<int> v2(5 , 1);
    for(auto i : v2){
        cout<<i<<" ";
    }

    // accesing can be done using memory also 

    vector<int> :: iterator it = v.begin();
    cout<<" the first elemenent in the vector is "<<*(it);
    cout<<endl;
    cout<<"the address of the first element is "<<&(*(it));
    cout<<endl;
    vector<int> :: iterator it1 = v.end();

    it1--; // it always points to the next of the last element
    cout<<"the last element is "<<*(it1);

    // we can print the vector in by using for each loop 
    cout<<endl;
    for(vector<int> :: iterator it = v.begin(); it != v.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto i: v){
        cout<<i<<" ";
    }
    // to copy a vector to another vector we can use, 
    vector<int> v3 = v;
    cout<<endl;
    for(vector<int> :: iterator it = v3.begin(); it != v3.end(); it++){
        cout<<*(it)<<" ";
    }
    // to delete a value from the vector we can use, 
    v3.pop_back();
    cout<<endl;
    for(vector<int> :: iterator it = v3.begin(); it != v3.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    // to delete any value from the vector we can use, 
    v3.erase(v3.begin());
    cout<<endl;
    for(auto i : v3){
        cout<<i<<" ";
    }  

    v3.erase(v3.begin() + 1, v3.end());
    cout<<endl;
    for(auto i : v3){
        cout<<i<<" ";
    }

    // for insertion in vector we can use, 
    vector<int> vector1(2 , 100);
    printVector(vector1);

    vector1.insert(vector1.begin() , 10000);
    printVector(vector1);
}