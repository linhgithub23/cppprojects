#include<iostream>
#include<string>
using namespace std;
void cutString(string s, int index){
    
    size_t pos = index;
    if(pos < 0 && pos > s.size()){
        cout<<s;
    }else{
    s = s.substr(pos);
    cout<<s;
    }
        
}
int main(){
    string s = "Truong Dai hoc Bach Khoa.";
    cutString(s, 7);
    return 0;
}