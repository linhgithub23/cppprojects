#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int M1 = 298, HP1 = 519, EXP1 = 2028, E3 = 10;
    int p4i[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int is80_4=0;
    int k4=0;
    bool check4 = false;
    for (int i = 0; i<12; i++) {
            
            p4i[i] = (p4i[i]+(int)pow(ceil(E3 / 29), 3)) % 9;
            cout<<p4i[i]<<" ";
    }
        int min = p4i[0];
        int min_idx=0;
        for (int i = 0; i < 12; i++) {
            if (p4i[i] < min) {
                min = p4i[i];
                min_idx = i + 1;
            }
        }
        cout<<endl<<min<<" "<<min_idx;
        cout<<endl;
        for(int i = 0; i<12; i++){
            p4i[i] = ((p4i[i] + E3) * (min / min_idx)) % 26 + 65;
            cout<<p4i[i]<<" ";
        }
        for(int i = 11; i >= 0; i--){
              if (p4i[i] == 80) {
                k4 = 11 - i + 1;
                is80_4+=1;
                break;
            }
        }
        cout<<endl<<k4<<" "<<is80_4;
         if(is80_4 == 1){
            check4 = true;
            HP1 = HP1 - 80 * k4 * 4;
            EXP1 = EXP1 + (4500 - 80 * k4) % 400;
            M1 = ceil(M1 - (double)k4 * E3 / 9);
        }
        else{
            check4 = false;
            M1 = ceil(M1 - (double)pow(12, 2) * E3 / 9);
        }
        cout<<HP1<<" "<<M1<<" "<<EXP1;  
        



}