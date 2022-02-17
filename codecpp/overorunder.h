//header file for overorunder class
#ifndef OVERORUNDER_H
#define OVERORUNDER_H
#include<iostream>
bool overOrUnder(int sum){
    //if the sum is greater than 4 and less than 10
    if(sum > 4 && sum < 10){
        return false;
    }
    //else if the sum greater than 11 and less than 17
    else if(sum > 11 && sum < 17){
        return true;
    }
}