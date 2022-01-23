#include<iostream>
#include<fstream>

using namespace std;
int main(){
   ifstream ifs;
   ifs.open("Test1.txt", ifstream::in);
   char c = ifs.get();
   while(ifs.good()){
       cout<<c;
       c= ifs.get();
   }
   ifs.close();
    return 0;




}