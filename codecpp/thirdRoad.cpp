#include<iostream>
#include<cmath>
using namespace std;
int main(){
     int p3i[1000];
     int HP1 = 519 ,M1 = 742, EXP1=2028, E3 =10;
     int k3;
     bool check3 = false;
        int is80_3 = 0;
        for (int i = 2; i <= 40; i += 2) {
            p3i[i / 2] = pow(i, 2);
            p3i[i / 2] = (int) (p3i[i / 2] + E3 * E3) % 113;
            cout<<p3i[i/2]<<" ";    
        }
    int max = p3i[1];
         for(int i = 1; i <= 20; i++ ){
             if(p3i[i] > max){
                 max = p3i[i];
             }
         }
         cout<<endl;
         for (int i = 1; i <= 20; i++) {
            p3i[i] = ((p3i[i] + E3) / max ) %26 + 65;
            cout<<p3i[i]<<" ";
        }
        for(int i = 20; i >= 1; i--){
            if (p3i[i] == 80) {
                k3 = 20 - i + 1;
                is80_3+=1;
                HP1 = HP1 - 80 * k3 * 3;
                EXP1 = EXP1 + (3500 - 80 * k3) % 300;
                M1 = ceil(M1 - (double)k3 * E3 / 9);
                break;
            }
        }
        if(is80_3 == 1){
            check3 = true;

        }
        else{
            check3 = false;
            M1 = ceil(M1 - (double)pow(20, 2) * E3 / 9);
        }
        cout<<endl;
        cout<<is80_3<<" "<<HP1<<" "<<EXP1<<" "<<M1<<" ";
        cout<<endl<<check3;



        
        
        
        

}