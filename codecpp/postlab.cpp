//Write a program read an s string from keyboard, find and return the longest symetrical sub-string of s.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int i=0,j=0,max=0,maxi=0,maxj=0;
    while(i<n){
        j=i+1;
        while(j<n){
            if(s[i]==s[j]){
                int k=i,l=j;
                while(k<l){
                    if(s[k]!=s[l]){
                        break;
                    }
                    k++;
                    l--;
                }
                if(k>=l){
                    if(max<(l-k+1)){
                        max=l-k+1;
                        maxi=i;
                        maxj=j;
                    }
                }
            }
            j++;
        }
        i++;
    }
    cout<<s.substr(maxi,maxj+1)<<endl;
    return 0;
}
