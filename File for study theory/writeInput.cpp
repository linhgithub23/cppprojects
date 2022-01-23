#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream ofs("Test1.txt", ofstream::app);
    ofs<<endl<<"Gooners are loosers!";
    ofs.close();
}