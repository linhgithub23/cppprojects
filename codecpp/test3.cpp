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
   for(int i = 21; i >= 1; i--){
    if(array[i]>array[21]){
        array[21] = array[i];
    }

   }
    cout<<array[21];

    return 0;
}