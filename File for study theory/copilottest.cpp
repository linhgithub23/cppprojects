//find index of all occurences of a substring in a string
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s = "Truong Dai Hoc Bach Khoa.";
    string sub = "a";
    vector<int> v;
    int i = 0;
    while(i<s.length()){
        if(s.substr(i,sub.length())==sub){
            v.push_back(i);
        }
        i++;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}