#include <iostream>
using namespace std;
   
int main(){
    int i, min;
       
    int input[5]={1,2,3,4,5};
    // Read array elements
    for(i = 0; i < 6 ; i++){
        input[i]+=1;
    }
    min = input[0];
    // search num in inputArray from index 0 to elementCount-1 
    for(i = 0; i < 6 ; i++){
        if(input[i] < min){
            min = input[i];
        }
    }
 
    cout  << "Minimum Element\n" << min;
 
    return 0;
}