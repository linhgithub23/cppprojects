//header file for main.cpp
#ifndef ROLLDICE_H
#define ROLLDICE_H
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int rollDice(){
    //seed the random number generator
    srand(time(0));
    //generate a random number between 1 and 6
    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    int die3 = rand() % 6 + 1;
    //add the two dice together
    int sum = die1 + die2+die3;

    return sum;
};