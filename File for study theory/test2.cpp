//wrtite a program to convert character array to integer array
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    char a[10]="001011";
    int b[10];
    for(int i=0;i<10;i++){
        b[i]=a[i]-'0';
    }
    //convert binary array b to decimal array d not using pow and print array d
    int d[10];
    for(int i=0;i<10;i++){
        d[i]=0;
        for(int j=0;j<=i;j++){
            d[i]+=b[j]*pow(2,i-j);
        }
    }
    for(int i=0;i<10;i++){
        cout<<d[i]<<" ";
    }

    return 0;
}
