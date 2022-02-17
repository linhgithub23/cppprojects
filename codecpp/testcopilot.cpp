//find the index of a substring in a string using string::find
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Truong Dai Hoc Bach Khoa.";
    string sub = "a";
    int i = 0;
    while(i<s.length()){
        if(s.find(sub,i) != string::npos){
            cout<<s.find(sub,i)<<" ";
        }
        else{
            cout<<" ";
        }
        i++;
    }
    cout<<endl;
    return 0;
}