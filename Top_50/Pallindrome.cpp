#include<bits/stdc++.h>
using namespace std;

int pallindrome(string str1, int size){
    int start = 0, end = size - 1, flag;

    while (start < end)
    {
        if(str1[start] == str1[end]){
            start++;
            end--;
        }
        else{
            flag = 0;
            return flag;
        }
    }
    flag = 1;
    return flag;
    

}

int main(){
    string str1;
    cout<<"enter the first string: ";
    cin>>str1;
    int size = str1.size();
    int flag = pallindrome(str1, size);
    if(flag == 0) cout<<"String is not pallindrome";
    else  cout<<"string is pallindrome";

}