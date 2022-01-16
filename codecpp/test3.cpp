#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int s = 0, m;
   int array[5] = {1,2,3,4,5};
   for(int i = 0; i < 5; i++){
        array[i]+=1;
        s+=array[i];
   }
    m = ceil(s/5);
    cout<<m;
    return 0;



}