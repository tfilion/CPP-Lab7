#include <iostream>
#include <time.h>

using namespace std;

int main()
{
     srand( time(NULL) ); 
    
    int bank = 500;
    int bet;
    int player;
    int random = rand() % 2; //random number generation of 1 or 0

    cout << "WELCOME TO BINARY ROULETTE!!!\n"; 
    cout << "You have $" << bank << " to start.\n";
    
        while (bank>0) //while money in bank is greater than zero, entire program will loop
        {
            cout << "You currently have $" << bank << ".\n";
            cout << "Place your bet.\n";
            cin >> bet; //if player bets more than he has banked, program will loop this block until player enters appropriate amt

            if (bet <= bank) //player's bet is less than or equal to bank, will be prompted to enter a number
            { 
                cout << "Please choose 1 or 0.\n";
                cin >> player;

                //WIN
                if (player == random) //if player guesses correct number, money he bets will be added to bank
                {
                    cout << "The roulette ball has landed on " << random << "!\n"; //prints randomly generated number 1 or 0
                    cout << "YOU WIN!\n";

                    bank = bank-bet;
                    bank = bet*2+bank;

                    cout << "You won $" << bet << "!\n";
                }
                
                //LOSE
                else if (player == 0 || player == 1) //if player guesses incorrectly, money will be deducted from bank
                {
                    cout << "The roulette ball has landed on " << random << "!\n"; //prints randomly generated number 1 or 0
                    cout << "You lose :(\n";
                    bank = bank-bet;
                }      
                
                else if (player >=2) //if player enters anything but a 1 or a 0, game will end
                {
                    cout << "You can only enter 1 or 0!\n";
                    cout << "Cashing out at $" << bank << ".\n";
                    break; //ends game and continues to command "GAME OVER"
                }  
                        
            }      
        
        }
            
    cout << "GAME OVER!\n" ; 

return 0;
}