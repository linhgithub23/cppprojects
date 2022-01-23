#include<iostream>
#include<cmath>
using namespace std;

int traceLuggage(int& HP1, int& EXP1, int& M1, const int& E3){
    int k1;
    int p1j[9] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
        for (int i = 0; i < 9; i++) {
            p1j[i] = (p1j[i] + E3) % 26 + 65;
            /*if (p1j[i] == 80) {
                k1 = i + 1;
                HP1 = HP1 - 80 * k1 * 2;
                EXP1 = EXP1 + (1000 - 80 * k1) % 101;
                M1 = ceil(M1 - (double)k1 * E3 / 9);
                break;
                
            } else {
               
                M1 = ceil(M1 - (double)pow(9, 2) * E3 / 9);
            }*/
        }
        for(int i = 0; i < 8; i++){
            if (p1j[i] == 80) {
                k1 = i + 1;
                HP1 = HP1 - 80 * k1 * 2;
                EXP1 = EXP1 + (1000 - 80 * k1) % 101;
                M1 = ceil(M1 - (double)k1 * E3 / 9);
                break;
                
            }
            else{
                i+=1;
            }
        }
        if(p1j[9] == 80){
                k1 = 9 + 1;
                HP1 = HP1 - 80 * k1 * 2;
                EXP1 = EXP1 + (1000 - 80 * k1) % 101;
                M1 = ceil(M1 - (double)k1 * E3 / 9);
                
        }
        else{
                M1 = ceil(M1 - (double)pow(9, 2) * E3 / 9);
        }
    return 0;
}
int main(){
    int HP1, EXP1, M1, E3;
    cin>>E3>>HP1>>EXP1>>M1;
    cout << traceLuggage(HP1, EXP1, M1, E3)<< endl;
        cout << HP1 << " "<< EXP1 << " " << M1 << endl;
}