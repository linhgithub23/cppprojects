#include<iostream>
using namespace std;
void updateNumber(int& a){
    a = a * 5;
}
int main(){
    int a = 10;
    updateNumber(a);
    cout<<a<<endl;
    return 0;
}