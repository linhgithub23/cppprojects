#include<iostream>
#include<cmath>
using namespace std;
int main(){
    
        int s = 0,HP1 = 519 ,M1 = 747, EXP1=2028, E3 =10;
        int p2i[7] = {2, 3, 5, 7, 11, 13, 17};
        int m, k2, is80_2 = 0;
        bool  check2 = false;
        for (int & i : p2i) {
            i = (i + 10) % 26;
            cout<<i<<" ";
            s += i;
        }
        m = ceil(double(s/7));
        cout<<endl;
        for (int i = 0; i < 7; i++) {
            p2i[i] = (p2i[i] + s + m) % 26 + 65;
            
        }
        cout<<endl;
        for(int i = 0; i<7; i++){
            if (p2i[i] == 80){
                k2 = i + 1;
                is80_2+=1;
                break;
            }
        }
        if(is80_2 == 1){
            check2 = true;
            HP1 = HP1 - 80 * k2 * 2;
            EXP1 = EXP1 + (1000 - 80 * k2) % 101;
            M1 = ceil(M1 - (double)k2 * E3 / 9);
        }
        else{
            check2 = false;
            M1 = ceil(M1-(double)pow(7,2)/9);
        }
        cout<<HP1<<" "<<EXP1<<" "<<M1<<endl;
        cout<<check2;
    return 0;
}