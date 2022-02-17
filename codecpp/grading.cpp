#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream myFile("score.txt");
    //read the file
    int num;
    int arr[100][100];
    int a = 0, b = 0, c = 0, d = 0;
    //read num and arr from file
    myFile>>num;
    for(int i  = 0; i < num; i++){
        for(int j = 0; j < 4; j++){
            myFile>>arr[i][j];
            
        }
    }
    
    //calculate the average of each student
    for(int i = 0; i < num; i++){
        int sum = 0;
        for(int j = 0; j < 4; j++){
            sum += arr[i][j];
        }
        for(int i = 0; i < num; i++){
            int sum = 0,count = 0;
            float avg;
                for(int j = 0; j < 4; j++){
                    sum+=arr[i][j];
                if(arr[i][j]==5)
                    count++;   
            }
            avg = sum / 4;
            if(avg>=8&&count==0)
                a++;
            else if(avg>=6.5&&avg<8&&count==0)
                b++;
            else if(avg>=5&&avg<6.5&&count==0)
                c++;
            else
                d++;
        }
    }
    //close the file
    myFile.close();
    cout<<"A "<<a<<endl;
    cout<<"B "<<b<<endl;
    cout<<"C "<<c<<endl;
    cout<<"D "<<d<<endl;
    return 0;
    
}