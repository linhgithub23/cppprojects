//find all the occurences of a substring in a string
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <cassert>
#include <climits>
#include <cstdarg>
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cwchar>
#include <cwctype>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    int n=s.size();
    int m=t.size();
    int i=0;
    int j=0;
    int count=0;
    while(i<n && j<m){
        if(s[i]==t[j]){
            i++;
            j++;
        }
        else{
            i=i-j+1;
            j=0;
        }
        count++;
    }
    cout<<count;
    return 0;
}