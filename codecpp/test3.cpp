#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int array[1000];
   for(int i = 2; i <= 40; i+=2){
       array[i/2] = pow(i,2);
       cout<<array[i/2]<<" ";
   }
   cout<<endl;
   for(int i = 1; i <= 20  ;i++){
       cout<<array[i]<<" ";
   }


    return 0;
}