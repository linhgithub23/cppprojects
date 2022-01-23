#include<iostream>
using namespace std;
int computeVolume(int length = 1, int width = 2, int height = 3)
{
    return length * width * height;
}
int main(){
    cout<<computeVolume(10)<<endl;// change the value of the first parameter
    cout<<computeVolume()<<endl;//use the default value of the parameters
    cout<<computeVolume(10,2,3);// change the value of the first parameter but keep the 2 others
    return 0;
}
