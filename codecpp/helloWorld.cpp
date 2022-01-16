#include<iostream>
using namespace std;
int main(){
    
    int array[5] = {1,2,3,4,5 };
    for(int i = 0; i<6 ; i++){
        array[i]+=1;
    }
    int min = array[0];
    for(int i = 0; i<6; i++){
        if(array[i] > min){
            min = array[i];
        }
    }
    cout<<min;
}