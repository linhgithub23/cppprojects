#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Linh dep trai";
    //delete all space
    int n = s.length();
    int i = 0;
    while(i < n){
        if(s[i] == ' '){
            s.erase(i,1);
            n--;
        }
        else{
            i++;
        }
    }
    cout<<s;
}