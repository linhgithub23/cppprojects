#include<iostream>
using namespace std;
int main(){
    
    int array[5] = {1,2,3,4,5};
    for(int i = 0; i<5 ; i++){
        array[i]+=1; // 2,3,4,5,6
    }
    int min = array[0];
    for(int i = 0; i<5; i++){
        if(array[i] < min){
            min = array[i];
        }
        array[i]+=min;
        cout<<array[i]<<" ";
    }
    return 0;
}