#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int HP1 = 999 ,M1 = 750, EXP1=1975, E3 =10;
    int k1;
    bool check1=false;
    int p1j[9] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
        int is80_1 = 0;
        for (int & i : p1j) {
            i = (i + E3) % 26 + 65;
            cout<<i<<" ";
        }
        for(int i = 0; i < 9; i++){
            if (p1j[i] == 80) {
                k1 = i + 1;
                is80_1+=1;
                break;
            }
        }
         if(is80_1 == 1){
            check1 = true;
            HP1 = HP1 - 80 * k1 * 2;
            EXP1 = EXP1 + (1000 - 80 * k1) % 101;
            M1 = ceil(M1 - double(k1 * E3 / 9));
        }
        else{
            M1 = ceil(M1 - (double)pow(9, 2) * E3 / 9);
        }
        cout<<endl<<k1<<endl;
        cout<<is80_1<<endl;
        cout<<check1<<" "<<HP1<<" "<<EXP1<<" "<<M1;

}