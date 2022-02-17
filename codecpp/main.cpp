//read data from file
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<fstream>
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
}
int placeBet(){
    //place a bet
    float bet;
    std::cout << "How much do you want to bet? ";
    std::cin >> bet;
    return bet;
    
}
bool overOrUnder(int sum){
    //if the sum is greater than 4 and less than 10
    if(sum > 4 && sum < 10){
        return false;
    }
    //else if the sum greater than 11 and less than 17
    else{ 
        
            return true;
    }
}

int main(){
    
    //get playerAccount & dealerAccount from file
    ifstream inputFile;
    inputFile.open("database.txt");
    float playerAccount;
    float dealerAccount;
    string instruction_1;
    string instruction_2;
    while(inputFile >> instruction_1>>playerAccount&&inputFile>>instruction_2>>dealerAccount){
        inputFile>>playerAccount;
        inputFile>>dealerAccount;
    }
        
    
    inputFile.close();
    long long playerAccount_after, dealerAccount_after;
    //place a bet
    int bet = placeBet();
    //roll the dice
    int sum = rollDice();
    //ask the player if they choose up or down
    char choice;
    std::cout << "Do you want to bet on up or down? ";
    std::cout<<" if up enter u, if down enter d: ";
    std::cin >> choice;

    
    //if the sum is greater than 4 and less than 10
    
    if(overOrUnder(sum)&& choice == 'u'){
        std::cout << "You win!" << std::endl;
        playerAccount_after = playerAccount+bet*1.02;
        dealerAccount_after = dealerAccount-bet*0.02;
    }
    //else if the sum greater than 11 and less than 17
    else{
        std::cout << "You lose!" << std::endl;
        dealerAccount_after = dealerAccount + bet*1.02;
        playerAccount_after = playerAccount - bet*1.02;
    }
    std::cout << "Your account balance is: " << playerAccount_after << std::endl;
    if(playerAccount_after <0){
        std::cout << "You have lost all your money!" << std::endl;
    }
    else{
        //write the new account balance to file
        ofstream outFile;
        outFile.open("database.txt");
        outFile << playerAccount_after << endl;
        outFile << dealerAccount_after << endl;
        outFile.close();

    //ask if the user wants to play again
    char playAgain;
    std::cout << "Do you want to play again? (y/n) ";
    std::cin >> playAgain;
    if(playAgain == 'y'){
        
        //update the account balance
        playerAccount = playerAccount_after;
        dealerAccount = dealerAccount_after;
        main();

    }
    else{
        return 0;
    }
    }
}


    