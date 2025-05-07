#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2;
    cout<<"enter the first string: ";
    cin>>str1;
    cout<<"enter the second string: ";
    cin>>str2;
    int size_str1 = str1.size(), size_str2 = str2.size();
    if(size_str1 != size_str2){
        cout<<"The strings are not anagrams."<<endl;
        return 0;
    }
    int ascisum1 = 0, ascisum2 = 0;
    for(int i = 0; i < size_str1; i++){
        ascisum1 += (int)str1[i];
        ascisum2 += (int)str2[i];
    }
    if(ascisum1 == ascisum2){
        cout<<"The strings are anagrams."<<endl;
    }
    else{
        cout<<"The strings are not anagrams."<<endl;
    }
}